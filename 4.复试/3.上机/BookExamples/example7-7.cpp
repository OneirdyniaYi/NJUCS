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
		{	str = new char[strlen(p)+1];
			strcpy(str,p);
		}
		String(const String &s)  //�������캯��
		{	str = new char[strlen(s.str)+1];
			strcpy(str,s.str);
		}
		~String()
		{	delete []str;
			str = NULL;
		}
		int length() const {	return strlen(str); }
		char &operator[](int i)
		{	if (i < 0 || i >= strlen(str)) 
			{	cerr << "�����ַ�����Χ!\n";
				exit(-1);
			}
			return str[i];	
		}
		char operator[](int i) const //���ڳ�������
		{	if (i < 0 || i >= strlen(str)) 
			{	cerr << "�����ַ�����Χ!\n";
				exit(-1);
			}
			return str[i];	
		}
		//����ת����������char *�����غ���
		operator const char *() const { return str; }  
		String &operator =(const char *p)  //��ֵ������=���غ���
		{	char *p1=new char[strlen(p)+1];
			strcpy(p1,p);
			delete []str;
			str = p1;
			return *this;
		}
		String &operator =(const String &s)  //��ֵ������=���غ���
		{	if (&s != this)
				*this = s.str;
			return *this;
		}
		String &operator +=(const char *p)  //���ϸ�ֵ������+=���غ���
		{	char *p1=new char[strlen(str)+strlen(p)+1];
			strcpy(p1,str);
			strcat(p1,p);
			delete []str;
			str = p1;
			return *this;
		}
		String &operator +=(const String &s)  //���ϸ�ֵ������+=���غ���
		{	*this += s.str;
			return *this;
		}
	friend bool operator ==(const String &s1, const String &s2);
	//friend bool operator ==(const String &s, const char *p);
	//friend bool operator ==(const char *p, const String &s);
};
bool operator ==(const String &s1,const String &s2) 
{ return strcmp(s1.str,s2.str)==0;
}
/*bool operator ==(const String &s, const char *p) 
{ return strcmp(s.str,p)==0; 
}
bool operator ==(const char *p, const String &s) 
{ return strcmp(p,s.str)==0; 
}*/
String operator +(const String &s1, const String &s2)
{	String temp(s1);
	temp += s2;
	return temp;
}
String operator +(const String &s, const char *p)
{	String temp(s);
	temp += p;
	return temp;
}
String operator +(const char *p, const String &s)
{	String temp(p);
	temp += s;
	return temp;
}
int main()
{	String s1;
	String s2("abcdefg");
	String s3;
	s1 = "xyz";
	s2 += s1;
	s3 = s1+s2;
	for (int i=0; i<s2.length(); i++)
	{	if (s2[i] >= 'a' && s2[i] <= 'z')
			s2[i] = s2[i]-'a'+'A';
	}
	if (s2 == String("ABCDEFGXYZ")) cout << "OK\n";
  cout << (const char *)s1 << endl
			 << (const char *)s2 << endl
			 << (const char *)s3 << endl;
	return 0;
}
