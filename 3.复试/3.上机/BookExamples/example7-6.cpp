#include <iostream>
using namespace std;
#include <cstring>
const int NUM=32;
class A
{		int x,y; //��A�����г�Ա˵����
	public:
		static void *operator new(size_t size);
		static void operator delete(void *p);
	private:
		static A *p_free; //����ָ��A���������ɿռ�����
		A *next; //����ʵ�����ɿռ�������ӡ�
};
A *A::p_free=NULL;
void *A::operator new(size_t size)
{	cout << "In self defined operator new\n";
  A *p;
	if (p_free == NULL)
	{	p_free = (A *)new char[size*NUM];  //����NUM��A�����Ķѿռ䡣
		for (p=p_free; p!=p_free+NUM-1; p++)  //�������ɽ������
			p->next = p+1;
		p->next = NULL;
	}
	p = p_free; //Ϊ��ǰ�����Ķ������ռ�
	p_free = p_free->next;
	memset(p,0,size);
	return p;
}
void A::operator delete(void *p)
{	((A *)p)->next = p_free;
	p_free = (A *)p;
}

int main()
{ A *p=new A; //��������ݳ�Աx��y����ʼ��Ϊ0��
  
  //....

  delete p;
  return 0;
}
