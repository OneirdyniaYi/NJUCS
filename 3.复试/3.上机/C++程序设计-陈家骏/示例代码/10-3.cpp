#include <cstdio>
//using namespace std;
int main()
{	FILE *fp=fopen("d:\\scores.txt","r"); //���ı���ʽ���ļ��������롣
	if (fp == NULL) //���ļ����Ƿ�ɹ���
	{	printf("���ļ�ʧ�ܣ�\n");
		return -1;
	}
	char id[11],name[9];
	int num_of_courses,score,total;
	fscanf(fp,"%10s",id); //�����һ��ѧ����ѧ�š�
	while (!feof(fp)) //���ļ�������ǡ�
	{	fscanf(fp,"%8s",name); //����������
		fscanf(fp,"%d",&num_of_courses); //����ѡ������
		total = 0;
		for (int i=0;i<num_of_courses;i++) //ѭ��������ſγɼ����ӵ�total��ȥ��
		{	fscanf(fp,"%d",&score);
			total += score;
		}
		printf("%s,%s,%d\n",id,name,total/num_of_courses); //��������
		fscanf(fp,"%10s",id); //������һ��ѧ����ѧ�š�
	}
	fclose(fp); //�ر��ļ���
  return 0;
}
