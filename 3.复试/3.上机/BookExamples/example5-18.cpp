#include <iostream>
#include <cstring>
using namespace std;
void reverse(char *str)
{	char *p1=str, //ָ���ַ�����ͷ
			*p2=str+strlen(str)-1; //ָ���ַ�����β
	for ( ; p1 < p2; p1++,p2--) //p1��p2�ֱ���ַ�����ͷ��β���м�λ���ƶ�
	{	//����*p1��*p2��ֵ
		char temp=*p1;
		*p1 = *p2;
		*p2 = temp;
	}
}
int main()
{ char str[100];

  cin >> str;
  reverse(str);
  cout << str << endl;
  return 0;
}