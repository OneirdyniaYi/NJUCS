#include <iostream>
#include <cmath>
using namespace std;
int main()
{ 	double a,b,c,root1,root2;
	cout << "������һԪ���η��̵�ϵ��(a,b,c)��" << endl;
	cin >> a >> b >> c;
	if (a == 0) //�ж�ϵ��a�Ƿ�Ϊ0
	{ 	cout << "����һ��һԪ���η���" << endl;
		return -1;
	}
	double t=b*b-4*a*c;
	if (t < 0) //�жϷ����Ƿ���ʵ��
	{	cout << "����û��ʵ��" << endl;
		return -1;
	}
	if (t == 0) //�жϷ����Ƿ��еȸ�
		root1 = root2 = -b/(2*a);
	else
	{ 	root1 = (-b+sqrt(t))/(2*a);
		root2 = (-b-sqrt(t))/(2*a);
	}
	cout << "���̵ĸ�Ϊ��" << root1 << "��" << root2 << endl;
	return 0;
}
