#include <iostream>
#include <cmath>
using namespace std;
int main()
{	const double eps=1e-6; //һ����С����
	double a,x1,x2; //x1��x2�ֱ����ڴ洢xn��xn+1
	cout << "������һ������";
	cin >> a;
	x2 = a; //��һ��ֵȡa
	do
	{	x1 = x2; //��סǰһ��ֵ
		x2 = (2*x1+a/(x1*x1))/3; //�����µ�ֵ
	} while (fabs(x2-x1) >= eps);
	cout << a << "���������ǣ�" << x2 << endl;
	return 0;
}
