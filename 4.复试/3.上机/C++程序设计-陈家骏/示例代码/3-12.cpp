#include <iostream>
using namespace std;
int main()
{	int n,i,f;
	cin >> n;
	for (i=2,f=1 //ѭ����ʼ��
			; 
			i<=n  //ѭ������
			;
			i++)     //��һ��ѭ��׼��
		f *= i;     //ѭ���壺��i��ֵ�˵�f��
       
	cout << "factorial of " << n << " = " << f << endl;
	return 0;
}
