#include <iostream>
#include <cstring>
using namespace std;
int str_to_int(char str[])
{	if (str[0] == '\0') return 0; //����ַ���Ϊ�գ��򷵻�0��Ϊת�����
	int n=str[0]-'\0'; //n���ڴ洢ת���������ʼ��Ϊ���λ���ֵ���ֵ
	for (int i=1; str[i]!='\0'; i++) //ѭ������������λ������
		n = n*10+(str[i]-'0'); 
	return n;
}

/*
#include <iostream>
#include <cstring>
using namespace std;
int str_to_int(char str[])
{	int n=0; //n���ڴ洢ת���������ʼ��Ϊ0
	for (int i=0; str[i]!='\0'; i++) //ѭ������ÿһλ����
		n = n*10+(str[i]-'0'); //�����λ���ԣ�����һ�γ˷�������0��
	return n;
}

*/