#include <iostream>
#include <cstring>
using namespace std;
int main()
{	const int MAX_LEN=100;
	char str[MAX_LEN];
	cin >> str;
	int len = strlen(str); //lenΪ�ַ����ĳ���
	for (int i=0,j=len-1; i<j; i++,j--) //i��j�ֱ���ַ�����ͷ��β���м�λ���ƶ�
	{	//����str[i]��str[j]�е��ַ�
		char temp;
		temp = str[i];
		str[i] = str[j];
		str[j] = temp;
	}
	cout << str << endl;
	return 0;
}
