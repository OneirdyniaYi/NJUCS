#include <iostream>
using namespace std;
int main()
{	int n;
	cin >> n;
	int i=2;
	while (i < n && n%i != 0) //ѭ�����������˼������ƺ��¼�����
		i++; 
	if (i == n) //����С��n��������������n
		cout << n << "��������" << endl;
	else
		cout << n << "����������" << endl;
	return 0;
}
