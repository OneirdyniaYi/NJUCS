#include <cstdio>
//using namespace std;
int main()
{	FILE *fp=fopen("d:\\scores.txt","w"); //���ı���ʽ���ļ����������
	if (fp == NULL) //���ļ����Ƿ�ɹ���
	{	printf("���ļ�ʧ�ܣ�\n");
		return -1;
	}
	char id[11],name[9];
	int num_of_courses,score;
	printf("������ѧ�š�������ѡ���������ſγɼ�(��ѧ��Ϊ'E'����)��\n");
	scanf("%10s",id); //�����һ��ѧ����ѧ�š�
	while (id[0] != 'E') //�������Ƿ������
	{	scanf("%8s",name); //����������
		scanf("%d",&num_of_courses); //����ѡ������
		fprintf(fp,"%s %s %d",id,name,num_of_courses); //��ѧ�š�������ѡ����
																	//������ļ���
		for (int i=0; i<num_of_courses; i++) //ѭ��������ſγɼ���������ļ���
		{	scanf("%d",&score);
			fprintf(fp," %d",score);
		}
		fputc('\n',fp); //���һ�����з����ļ���
		scanf("%10s",id); //������һ��ѧ����ѧ�š�
	}
	fclose(fp);
  return 0;
}
