//����1��
#include <iostream>
using namespace std;
int main()
{	double x;
	int n;
	cout << "������x��n��";
	cin >> x >> n;
	double sum = 1+x; 
	//���μ���x2/2!������xi/i!���� ��xn-1/(n-1)!���ӵ�sum�С�
	for (int i=2; i<n; i++) 
	{	int j,a=1,b=x; 
		for (j=2; j<=i; j++) a *= j; //����i!
		for (j=2; j<=i; j++) b *= x; //����xi
		sum += b/a; //����xi/i!�������ӵ�sum��
	}
	cout << "x=" << x << ",n=" << n << ",sum=" << sum << endl;
	return 0;
}

/*
//����2�� 
#include <iostream>
using namespace std;
int main()
{	double x;
	int n;
	cin >> x >> n;
	int a=1;
	double b=x,sum=1+x;
	//���μ���x2/2!������xi/i!���� ��xn-1/(n-1)!���ӵ�sum��
	for (int i=2; i<n; i++) 
	{	a *= i;  //����i!
		b *= x;  //����xi
		sum += b/a;  //���㲢�����ӵ�sum��
	}
	cout << "x=" << x << ",n=" << n << ",sum=" << sum << endl;
	return 0;
}

//����3�� 
#include <iostream>
using namespace std;
int main()
{	double x;
	int n;

	cin >> x >> n;
	double item=x,sum=1+x;
	//���μ���x2/2!������xi/i!���� ��xn-1/(n-1)!���ӵ�sum��
	for (int i=2; i<n; i++) 
	{	item *= x/i;   // ����xi/i!
		sum += item;  // ��xi/i!�ӵ�sum��
  }
  cout << "x=" << x << ",n=" << n << ",sum=" << sum << endl;
	return 0;
}
*/