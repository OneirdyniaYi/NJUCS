#include <iostream>
using namespace std;
int main()
{	int n;
	cin >> n;
	int i=1,f=1; //ѭ����ʼ��
	do
	{	f *= i; //��i��ֵ�˵�f��
		i++; //��һ��ѭ����׼��
	} while (i <= n); //ѭ������
	cout << "factorial of " << n << " = " << f << endl;
	return 0;
}
