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
{	FILE *fp=fopen("d:\\students.dat","r+b"); 
												//�Զ����Ʒ�ʽ���ļ���������/�����
	if (fp == NULL) //���ļ����Ƿ�ɹ���
	{	printf("���ļ�ʧ�ܣ�\n");
		return -1;
	}
	Student st;
	if (fseek(fp,sizeof(st),SEEK_SET) == 0) //�ļ�λ��ָ��ָ��ڶ���ѧ�����ݡ�
	{	fread(&st,sizeof(st),1,fp); //����ڶ���ѧ�����ݣ�
												 //�ļ�λ��ָ��������һ��ѧ�����ݡ�
		st.major = COMPUTER; //�޸ĵڶ���ѧ�����ݵ�רҵ��
		fseek(fp,-sizeof(st),SEEK_CUR); //�ļ�λ��ָ��ָ�صڶ���ѧ�����ݡ�
		fwrite(&st,sizeof(st),1,fp); //�޸ĺ�ĵڶ���ѧ������д���ļ���
	}
	fclose(fp); //�ر��ļ���
  return 0;
}
