#include <iostream>
using namespace std;
int main()
{	int n;
	cout << "�����������ĸ�����";
	cin >> n;
	cout << "������" << n << "��������";
	int sum=0��
	for (int i=1; i<=n; i++)
	{	int a; 
		cin >> a;
		sum += a; 
	}
	cout << "�����" << n << "�������ĺ��ǣ�" << sum << endl;
	return 0;
}
