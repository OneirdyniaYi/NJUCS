#include <cmath>
#include <iostream>
using namespace std;
int main()
{ double x,square,cube,square_root; //�������������ֱ����ڴ洢�������������ƽ����
													 //�����Լ�ƽ����
	cout << "Please input a positive number: "; //�����ʾ��Ϣ
	cin >> x; //����һ����
	square = x * x; //����x��ƽ��
	cube = x * x * x; //����x������
	square_root = sqrt(x);  //����x��ƽ������sqrtΪC++��׼���еļ���ƽ�����ĺ���
	cout << "The square of " << x << " is " << square << endl; //���x��ƽ��
	cout << "The cube of " << x << " is " << cube << endl; //���x������
	cout << "The square root of " << x << " is " 
			<< square_root << endl; //���x��ƽ����
	return 0; //�������
}
