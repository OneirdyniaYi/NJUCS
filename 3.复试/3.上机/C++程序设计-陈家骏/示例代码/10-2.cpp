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
{	FILE *fp=fopen("d:\\students.dat","wb"); //�Զ����Ʒ�ʽ���ļ����������
	if (fp == NULL) //���ļ����Ƿ�ɹ���
	{	printf("���ļ�ʧ�ܣ�\n");
		return -1;
	}
	Student st;
	printf("������ѧ�š��������Ա𡢳������ڡ������غ�רҵ(��ѧ��Ϊ'E'����)��\n");
	scanf("%10s",st.id); //�����һ��ѧ����ѧ�š�
	while (st.id[0] != 'E')
	{	//...... //�����������Ա𡢳������ڡ������غ�רҵ������st�С�
		fwrite(&st,sizeof(st),1,fp); //�Զ����Ƹ�ʽ�������st��ֵ���ļ���
		scanf("%10s",st.id); //������һ��ѧ����ѧ�š�
	}
	fclose(fp); //�ر��ļ���
  return 0;
}
