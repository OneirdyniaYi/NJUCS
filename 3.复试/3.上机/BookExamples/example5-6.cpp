#include <iostream>
#include <cstring>
using namespace std;
int find_substr(char str[], char sub_str[])
{	int len=strlen(str), //��������
			sub_len=strlen(sub_str); //�Ӵ��ĳ���
	for (int i=0; i<=len-sub_len; i++) //��������ͷ��ʼѭ�������Ӵ�
	{	//�����ѭ���������д�λ��i��ʼ����ַ����Ӵ��е��ַ����бȽ�
		int j=0;
		while (j < sub_len && sub_str[j] == str[i+j]) j++;
		if (j == sub_len) return i; //ƥ�䵽�Ӵ����������������е�λ��i
	}
	return -1; //δ�ҵ��Ӵ�������-1
}
