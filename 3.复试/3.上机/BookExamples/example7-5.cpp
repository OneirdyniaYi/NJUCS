#include <iostream>
#include <cstring>
using namespace std;
class A
{		int x,y;
	public:
		void *operator new(size_t size)
		{	char *p=new char[size]; //����ϵͳ�ѿռ���������
			memset(p,0,size); //�����뵽�Ķѿռ��ʼ��Ϊȫ"0"��
			return p;
		}
    void display()
    { cout << x << ',' << y;
    }
		//......
};
int main()
{ A *p=new A; //��������ݳ�Աx��y����ʼ��Ϊ0��
  
  p->display();
  
  delete p;
  return 0;
}
