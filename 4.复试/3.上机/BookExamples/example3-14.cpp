#include <iostream>
using namespace std;
int main()
{	int a,sum=0;
	cout << "���������ɸ���������-1��������";
	cin >> a; //�����һ����
	while (a != -1)
	{	sum += a; 
		cin >> a; //������һ����
	}
	cout << "����������ĺ��ǣ�" << sum << endl;
	return 0;
}
