#include <iostream>
using namespace std;
int main()
{	int a,b,c;
	cin >> a >> b >> c;
	if (a+b <= c || b+c <= a || c+a <= b)
		cout << "����������";
	else if (a == b && b == c)
		cout << "�ȱ�������";
	else if (a == b || b == c || c == a)
		cout << "����������";
	else if (a*a+b*b == c*c || b*b+c*c == a*a || c*c+a*a == b*b)
		cout << "ֱ�������Σ��ǵ�����";
	else
		cout << "����������";	
	cout << endl;
	return 0;
}
