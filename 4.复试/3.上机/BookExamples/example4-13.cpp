#include <iostream>
using namespace std;
void hanoi(char x,char y,char z,int n) //��n��Բ�̴�x��ʾ����������y����ʾ�����ӡ�
{	if (n == 1)
		cout << "1: " << x << "��" << y << endl;  //�ѵ�1�����Ӵ�x��ʾ����������
                                                      //y����ʾ�����ӡ�
	else
	{	hanoi(x,z,y,n-1);  //��n-1��Բ�̴�x��ʾ����������z����ʾ�����ӡ�
		cout << n << ": " << x << "��" << y << endl;  
									//�ѵ�n��Բ�̴�x��ʾ����������y����ʾ�����ӡ�
		hanoi(z,y,x,n-1);  //��n-1��Բ�̴�z��ʾ����������y����ʾ�����ӡ�
	}
}
