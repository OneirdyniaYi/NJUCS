#include <iostream>
using namespace std;
int main()
{	int n; //n���ڴ洢����
	double a,sum; //a��sum�ֱ����ڴ洢����ͼ����ĺ�
	cout << "a=";
	cin >> a; //��������
	cout << "n=";
	cin >> n; //��������
	sum = a*(1+n)*n/2; //���㼶����
	cout << "sum=" << sum << endl; //���������
	return 0; //�������
}
