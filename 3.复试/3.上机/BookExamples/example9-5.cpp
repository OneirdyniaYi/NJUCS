#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
using namespace std;

int main()
{	vector<int> v; //����һ��vector����������v����Ԫ��Ϊint��

	//��������v�е�Ԫ��
	int x;
	cin >> x;
	while (x > 0) //ѭ��������v����������int��Ԫ��
	{	v.push_back(x); //������v��β������һ��Ԫ��
		cin >> x;
	}

	//��������v��һ��������it1��ʹ��ָ������v�еĵ�һ��Ԫ��λ��
	vector<int>::iterator it1 = v.begin(); 
	
	//��������v��һ��������it2��ʹ��ָ������v�е����һ��Ԫ�ص���һ��λ��
	vector<int>::iterator it2 = v.end();

	//�����㷨max_element���㲢�������v�е����Ԫ��
	cout << "Max = " << *max_element(it1,it2) << endl;
	
	//�����㷨accumulate���㲢�������v������Ԫ�صĺ�
	cout << "Sum = " << accumulate(it1,it2,0) << endl;

	//�����㷨sort������v�е�Ԫ�ؽ�������
	sort(it1,it2); 
	
	//���������
	cout << "Sorted result is:\n";
	while (it1 != it2)
	{ cout << *it1 << ' '; //���������it1��ָ�������v��Ԫ��
		++it1; //ʹ������it1ָ������v����һ��Ԫ��
	}
	cout << endl;

	return 0;
}
