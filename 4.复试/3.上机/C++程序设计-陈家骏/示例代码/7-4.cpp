#include <iostream>
using namespace std;
class A
{		int x,y;
	public:
		void f() {;}
		void g() {;}
};

class B  //����ָ����
{		A *p_a;
		int count;
	public:
		B(A *p) 
		{	p_a = p; 
			count = 0; 
		}
		A *operator ->()  //������"->"�����غ���
		{	count++; 
			return p_a; 
		}
		int num_of_a_access() const
		{	return count; 
		}
};
int main()
{
  A a;
  B b(&a);  //bΪһ������ָ�룬��"ָ��"��a��
  b->f();  //�ȼ��ڣ�b.operator->()->f(); �����ʵ���a.f()
  b->g();  //�ȼ��ڣ�b.operator->()->g(); �����ʵ���a.g()
  cout << b.num_of_a_access() << endl; // ��ʾ����a�ķ��ʴ���
  return 0;
}
