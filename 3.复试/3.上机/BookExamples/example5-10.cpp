//1��ѡ������
#include <iostream>
using namespace std;
void sel_sort(int x[], int n)
{	for ( ; n>1; n--)  //�������ĸ�������ѭ����ÿ�μ���һ����
	{	int i_max=0; //i_max���ڱ������Ԫ�ص��±꣬���ȼ����0��Ԫ�����
		for (int i=1; i<n; i++) //ѭ����ǰn�����е����Ԫ��
			if (x[i] > x[i_max]) i_max = i; //�޸�i_max��ֵ��ʹ��һֱΪ���Ԫ�ص��±�
		//����x[i_max]��x[n-1]��ֵ
		int temp = x[i_max];
		x[i_max] = x[n-1];
		x[n-1] = temp;
	}
}
const int N=10;
int main()
{	int a[N],i;
	for (i=0; i<N; i++)  //����N��������
		cin >> a[i]; 
	sel_sort(a,N);
	for (i=0; i<N; i++)  //���������
		cout << a[i] << ' '; 
	cout << endl;
	return 0;
}


/*
//2����������
#include <iostream>
using namespace std;

int split(int x[],int first, int last)
{	int split_point,pivot;
	pivot = x[first];
	split_point = first;
	for (int unknown=first+1; unknown <=last; unknown++)
		if (x[unknown] < pivot)
		{	split_point++;
			//����x[split_point]��x[unknown]��ֵ
			int t=x[split_point];
			x[split_point] = x[unknown];
			x[unknown] = t;
		}
	//����x[first]��x[split_point]��ֵ
	x[first] = x[split_point];
	x[split_point] = pivot;
	return split_point;
}

void quick_sort(int x[],int first, int last)
{	if (first < last)
	{	int split_point;
		split_point = split(x,first,last);
		quick_sort(x,first,split_point-1);
		quick_sort(x,split_point+1,last);
	}
}

const int N=10;
int main()
{	int a[N],i;
	for (i=0; i<N; i++)  //����N��������
		cin >> a[i]; 
	quick_sort(a,0,N-1);
	for (i=0; i<N; i++)  //���������
		cout << a[i] << ' '; 
	cout << endl;
	return 0;
}
*/