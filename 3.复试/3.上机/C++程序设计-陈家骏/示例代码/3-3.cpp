#include <iostream>
using namespace std;
int main()
{	int a,b,c,max;
	cout << "����������������" << endl;
	cin >> a >> b >> c;
	if (a > b) //�Ƚ�a��b�Ĵ�С�����߸�ֵ��max
		max = a;
	else
		max = b;
	if (c > max) //�Ƚ�c��max�Ĵ�С�����c�����max����Ϊc��ֵ
		max = c; 
	cout << "�����Ϊ��" << max << endl;
	return 0;
}
