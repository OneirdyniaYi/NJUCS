#include <iostream>
using namespace std;
int main()
{	int h1,m1,s1, //��һ��ʱ�̵�ʱ���֡���
			h2,m2,s2, //�ڶ���ʱ�̵�ʱ���֡���
			r; //�ȽϵĽ��
	cout << "�������һ��ʱ�̣�ʱ���֡��룩��";
	cin >> h1 >> m1 >> s1;
	cout << "������ڶ���ʱ�̣�ʱ���֡��룩��";
	cin >> h2 >> m2 >> s2;
	if (h2 > h1) //�ȱȽ�����ʱ�̵�ʱ
		r = 1;
	else if (h2 < h1)
		r = -1;
	else if (m2 > m1)  //�Ӵˣ�h1 == h2
		r = 1;
	else if (m2 < m1)
		r = -1;
	else if (s2 > s1)  //�Ӵˣ�h1 == h2 ���� m2 == m1
		r = 1;
	else if (s2 < s1)
		r = -1;
	else  // h1 == h2 ���� m1 == m2 ���� s1 == s2
		r = 0;
	if (r == 1)
		cout << "��һ��ʱ����ǰ��";
	else if (r == -1)
		cout << "�ڶ���ʱ����ǰ��";
	else
		cout << "����ʱ����ͬ";
	cout << endl;
	return 0;
}
