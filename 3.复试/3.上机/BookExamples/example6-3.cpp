#include <cstring>
#include <cstdlib>
#include <iostream>
using namespace std;
class String
{		char *str;
	public:
		String()
		{	str = NULL;
		}
		String(const char *p)
		{	str = new char[strlen(p)+1];  //������Դ��
			strcpy(str,p);
		}
		~String()
		{	delete []str;  //�黹��Դ��
			str = NULL; //һ������²���Ҫ������䡣��ʱ��Ҫ��
		}
		int length() { 	return strlen(str); } //ȡ�ַ������ȡ�
		char &char_at(int i) //����ָ��λ�����ַ������á�
		{	if (i < 0 || i >= strlen(str)) 
			{	cerr << "�����ַ�����Χ!\n";
				exit(-1);
			}
			return str[i];	
		}
		const char *get_str() { return str; } //�����ַ���ָ�롣
		//�����������غ���ʵ���ַ������ƹ��ܡ�
		String &copy(const char *p)
		{	char *p1=new char[strlen(p)+1];  //������Դ��
			strcpy(p1,p);
			delete []str;
			str = p1;
			return *this;
		}
		String &copy(const String &s) { return copy(s.str); }
		//�����������غ���ʵ���ַ���ƴ�ӹ��ܡ�
		String &append(const char *p)
		{	char *p1=new char[strlen(str)+strlen(p)+1];  //������Դ��
			strcpy(p1,str);
			strcat(p1,p);
			delete []str;
			str = p1;
			return *this;
		}
		String &append(const String &s) { return append(s.str); }
		//�����������غ���ʵ���ַ����ȽϹ��ܡ�
		int compare(const char *p) { return strcmp(str,p); }
		int compare(const String &s) { return strcmp(str,s.str); }
};
int main()
{	String s1;
	String s2("abcdefg");
	s1.copy("xyz");
	s2.append(s1);
	for (int i=0; i<s2.length(); i++)
	{	if (s2.char_at(i) >= 'a' && s2.char_at(i) <= 'z')
			s2.char_at(i) = s2.char_at(i)-'a'+'A';
	}
	if (s2.compare("ABCDEFGXYZ") == 0) cout << "OK\n";
  cout << s1.get_str() << endl << s2.get_str() << endl;
	return 0;
}
