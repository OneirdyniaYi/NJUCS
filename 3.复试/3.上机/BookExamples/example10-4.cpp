#include <cstdio>
//using namespace std;
enum Sex { MALE, FEMALE };
struct Date
{	int year;
	int month;
	int day;
};
enum Major { MATHEMATICS, PHYSICS, CHEMISTRY, COMPUTER, GEOGRAPHY,
							ASTRONOMY, ENGLISH, CHINESE, PHILOSOPHY};
struct Student
{	char id[11];
	char name[9];
	Sex sex;
	Date birth_date;
	char birth_place[40];
	Major major;
};
int main()
{	FILE *fp=fopen("d:\\students.dat","rb"); //�Զ����Ʒ�ʽ���ļ��������롣
	if (fp == NULL) //���ļ����Ƿ�ɹ���
	{	printf("���ļ�ʧ�ܣ�\n");
		return -1;
	}
	Student st;
	int count=0;
	fread(&st,sizeof(st),1,fp); //�����һ��ѧ������Ϣ��
	while (!feof(fp))
	{	if (st.sex == MALE) count++;
		fread(&st,sizeof(st),1,fp); //������һ��ѧ������Ϣ��
	}
	printf("�����������ǣ�%d\n",count);
	fclose(fp);
  return 0;
}
