#include <iostream>
using namespace std;
enum Month { JAN, FEB, MAR, APR, MAY, JUN, JUL, AUG, SEP, OCT, NOV, DEC };
void display_month(Month m)
{	switch (m)
	{	case JAN:	cout << "January"; break;
		case FEB:	cout << "February"; break;
		case MAR:	cout << "March"; break;
		case APR:	cout << "April"; break;
		case MAY:	cout << "May"; break;
		case JUN:	cout << "June"; break;
		case JUL:		cout << "July"; break;
		case AUG:	cout << "August"; break;
		case SEP:		cout << "September"; break;
		case OCT:	cout << "October"; break;
		case NOV:	cout << "November"; break;
		case DEC:	cout << "December"; break;
	}
	cout << endl;
}
int main()
{	const int NUM_OF_MONTH_PER_YEAR=12;
	double humidities[NUM_OF_MONTH_PER_YEAR];
	Month i,max,min;
	//���ʪ������
	cout << "������ĳ��12���µ�ʪ�����ݣ�";
	for (i=JAN; i<=DEC; i = Month(i+1))
		cin >> humidities[i];

	//����ʪ��������С���·ݡ�
	max = min = JAN;
	for (i=FEB; i<=DEC; i = Month(i+1))
		if (humidities[i] > humidities[max])
			max = i;
		else if (humidities[i] < humidities[min])
			min = i;

	//������
	cout << "���ʪ�ȵ��·��ǣ�";
	display_month(max);
	cout << "��Сʪ�ȵ��·��ǣ�";
	display_month(min);
	return 0;
}
