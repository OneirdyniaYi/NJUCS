#include <iostream>
using namespace std;
int max(int x[], int n) //����ĳһ�е����Ԫ��
{	int *p_max=x; //p_maxָ�����Ԫ�أ��ȼ����һ��Ԫ�����
	int *p=x+1, //pָ��ڶ���Ԫ��
			*p_last=x+n-1; //p+lastָ�����һ��Ԫ��
	for ( ; p <= p_last; p++) //�ӵڶ���Ԫ�ؿ�ʼ�����Ԫ��
		if (*p > *p_max) p_max = p;
	return *p_max;
}
#define M 20
#define N 10
int main()
{	int a[M][N];
	//...... //��ȡ����Ԫ�ص�ֵ
	int (*p)[N]=a, //pΪ�������ָ�룬��ʼ��Ϊָ���һ�У����ڶ�������н��б���
			(*p_last_line)[N]=a+M-1; //p_last_lineҲΪ�������ָ�룬��ָ�����һ��
	for ( ; p <= p_last_line; p++) //��������н���ѭ��������ÿһ�е����Ԫ��
		cout << max(*p,N) << endl;
	return 0;
}
