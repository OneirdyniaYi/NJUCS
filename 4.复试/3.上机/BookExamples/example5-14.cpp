#include <iostream>
using namespace std;
int main()
{ int max_len=20; //��̬����Ĵ�С����ʼΪ20
  const int INCREMENT=10; //���ڸı������С������
  int count=0, //����������ĸ������м���
  int	n; //���ڴ洢��ǰ�������
  int *p=new int[max_len]; //������ʼ�Ķ�̬����
  cin >> n; //�����һ����
  while (n != -1) //ѭ�������������ֱ��������-1Ϊֹ
  {	if (count >= max_len) //��������ռ䲻����
	  {	max_len += INCREMENT; 
		  int *q=new int[max_len]; //�����ϴ�Ķ�̬����
		  for (int i=0; i<count; i++) q[i] = p[i]; //ת��������������µ�������
		  delete []p; //������С������
		  p = q; //pָ���µġ��ϴ������
	  }
	  p[count] = n; //�洢�������
	  count++; //��������ĸ�����һ
	  cin >> n; //������һ����
  }
  sort(p,count);
  delete []p; //������̬����
  return 0;
}
