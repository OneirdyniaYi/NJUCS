#include <iostream>
using namespace std;
enum Sex { MALE, FEMALE };
struct Date
{	int year;
	int month;
	int day;
};
enum Major { MATHEMATICS, PHYSICS, CHEMISTRY, COMPUTER, GEOGRAPHY,
						  ASTRONOMY, ENGLISH, CHINESE, PHILOSOPHY};
struct Student
{	int no;
	char name[20];
	Sex sex;
	Date birth_date;
	char birth_place[40];
	Major major;
};
const int MAX_NUM_OF_STUDENTS =1000;
Student students[MAX_NUM_OF_STUDENTS];
extern void display_student_info(Student s); //ǰ��5�ж���ĺ�����
extern int find_substr(char sub_str[], char str[]);  
												//�� 5 6�ж�����Ӵ����Һ�����
extern void bubble_sort(Student s[],int num);  
												//�ں���main�ĺ��涨�����������
extern void display_student_info(Student s);

int main()
{	int num_of_students,count,i;
	//�Ӽ��̻�����ļ��������ѧ�������ݣ�ѧ�������洢��num_of_students�С�
	//......
	//ͳ�Ƽ����רҵ������������
	count = 0;
	for (i=0; i<num_of_students; i++) 
		if (students[i].major == COMPUTER && students[i].sex == MALE)
			count++; 
	cout << "�����רҵ�����������ǣ�" << count << endl;
	
	//ͳ�Ƴ�����Ϊ"�Ͼ�"��ѧ��������
	count = 0;
	for (i=0; i<num_of_students; i++) 
		if (find_substr("�Ͼ�",students[i].birth_place) != -1)
			count++; 
	cout << "������Ϊ\"�Ͼ�\"��ѧ�������ǣ�" << count << endl;

	//��ѧ����С�����students��Ԫ�ؽ�������
	bubble_sort(students,num_of_students);

	//��ѧ����С�����������ѧ������Ϣ
	for (i=0; i<num_of_students; i++) 
		display_student_info(students[i]);

	return 0;
}
void bubble_sort(Student s[],int num)  //ð�������㷨
{	bool exchange;
	while (num > 1)
	{	exchange = false;
		for (int i=0; i<num-1; i++)
		{	if (s[i].no > s[i+1].no)
			{	//����s[i]��s[i+1]��ֵ
				Student temp=s[i];
				s[i] = s[i+1];
				s[i+1] = temp;
				exchange = true;
			}
		}
		if (!exchange) break;
		num--;
	}
}

void display_student_info(Student s)
{	cout << "ѧ�ţ�" << s.no << endl;
	cout << "������" << s.name << endl;
	cout << "�Ա�" << (s.sex==MALE?"��":"Ů") << endl;
	cout << "�������ڣ�" << s.birth_date.year << ',' 
									 << s.birth_date.month << ',' 
									 << s.birth_date.day << endl;
	cout << "�����أ�" << s.birth_place << endl;
	cout << "רҵ��";
	switch (s.major)
	{	case MATHEMATICS: 	cout << "Mathematics"; break;
		case PHYSICS: 		cout << "Physics"; break;
		case CHEMISTRY: 	cout << "Chemistry "; break;
		case COMPUTER: 		cout << "Computer"; break;
		case GEOGRAPHY: 	cout << "Geography"; break;
		case ASTRONOMY: 	cout << "Astronomy"; break;
		case ENGLISH: 		cout << "English"; break;
		case CHINESE: 		cout << "Chinese"; break;
		case PHILOSOPHY: 	cout << " Philosophy"; break;
	}
	cout << endl;
}

int find_substr(char sub_str[], char str[])
{	int len=strlen(str),
			sub_len=strlen(sub_str);
	for (int i=0; i<=len-sub_len; i++)
	{	int j=0;
		while (j < sub_len && sub_str[j] == str[i+j]) j++;
		if (j == sub_len) return i;
	}
	return -1;
}
