#include <iostream>
using namespace std;
int main()
{	int n;
	cin >> n;
	int fib_1=1; //��һ��Fibonacci��
	int fib_2=1; //�ڶ���Fibonacci��
	for (int i=3; i<=n; i++) //ѭ�������3��4��...��n��Fibonacci��
	{	int temp=fib_1+fib_2; //�����µ�Fibonacci��
		fib_1 = fib_2;  //��סǰһ��Fibonacci��
		fib_2 = temp;  //��ס�µ�Fibonacci��
	}
	cout << "��" << n << "���Ѳ��������ǣ�" << fib_2 << endl;
	return 0;
}
