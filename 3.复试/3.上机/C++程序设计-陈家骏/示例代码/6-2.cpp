#include <iostream>
using namespace std;
//#include "Date.h" //����Date��Ķ�������ļ�"Date.h"��
class Date
{	public:
		void set(int y, int m, int d); //��Ա����������
		bool is_leap_year(); //��Ա����������
		void print(); //��Ա����������
	private:
		int year,month,day;
};
void Date::set(int y, int m, int d) //���ⶨ��ĳ�Ա����
{	year = y;
	month = m;
	day = d;
}
bool Date::is_leap_year() //���ⶨ��ĳ�Ա����
{	return (year%4 == 0 && year%100 != 0) || (year%400==0);
}
void Date::print() //���ⶨ��ĳ�Ա����
{	cout<<year<<"."<<month<<"."<<day;
}

int main()
{	int y,m,d;
	cout << "�������ꡢ�¡��գ�";
	cin >> y >> m >> d;
	Date some_date; //����һ��Date��Ķ���some_date��
	some_date.set(y,m,d); //���ö���some_date������ֵ��
	some_date.print(); //���some_date����ʾ�����ڡ�
	if (some_date.is_leap_year())
		cout << "������\n";
	else
		cout << "��������\n";
	return 0;
}
