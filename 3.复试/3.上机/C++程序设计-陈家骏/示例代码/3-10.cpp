#include <iostream>
using namespace std;
int main()
{	int n;
	cin >> n;
	int i=2,f=1; //ѭ����ʼ��
	while (i <= n) //ѭ����������i=2��3��...��n����ѭ��
	{	f *= i; //��i��ֵ�˵�f��
		i++; //��һ��ѭ��׼��
	}
	cout << "factorial of " << n << " = " << f << endl;
	return 0;
}
