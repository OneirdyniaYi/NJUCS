#include <iostream>
using namespace std;
int main()
{	int n,count=0;
	cout << "������һ����������"
	cin >> n;  //�Ӽ�������һ��������
	for (int i=2; i<n; i++)  //ѭ�����ֱ��ж�2��3��...��n-1�Ƿ�Ϊ����
	{	int j=2;
		while (j < i && i%j != 0) //ѭ�����ֱ��ж�i�Ƿ��ܱ�2��3��...��i-1����
			j++;
		if (j == i) //i������
		{	cout << i << ",";
			count++;
			if (count%6 == 0) cout << endl; //����ÿһ�����6��������
		}
	}
	cout << endl;
	return 0;
}

/*
//�Ľ��ĳ���
#include <iostream>
#include <cmath>
using namespace std;
int main()
{	int n,count=1;
	cin >> n;   //�Ӽ�������һ����
	if (n < 2) return -1;
	cout << 2 << ",";  //�����һ������
	for (int i=3; i<n; i+=2)  //ѭ�����ֱ��ж�3��5��...���Ƿ�Ϊ����
	{	int j=2;
		while (j<=sqrt(i) && i%j!=0) //ѭ�����ֱ��ж�i�Ƿ��ܱ�2��3��...�� ����
			j++;
		if (j > sqrt(i)) //i������
		{	cout << i << ",";
			count++;
			if (count%6 == 0) cout << endl; //����ÿһ�����6��������
		}
	}
	cout << endl;
	return 0;
}

*/
