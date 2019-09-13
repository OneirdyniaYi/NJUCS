//˳�����
#include <iostream>
#include <cstring>
using namespace std;
const int NAME_LEN=20;
const int TABLE_LEN=100;
struct TableItem
{ char name[NAME_LEN];
  // ...... //������Ϣ
};	
TableItem name_table[TABLE_LEN]={"����","�Ϻ�","�Ͼ�","����","�人" ,"������","����"};

int linear_search(char key[], TableItem t[], int num_of_items)
{	int index;
	for (index=0; index<num_of_items; index++)
		if (strcmp(key,t[index].name) == 0) break;
	if (index < num_of_items)
		return index;
	else
		return -1;
}

int main()
{ 
  for (int i=0; i<7; i++)
    cout << name_table[i].name << ' ';
  cout << endl;

	int result;
	result = linear_search("�Ͼ�",name_table,7);
	cout << "�Ͼ�: " << result << endl;
	return 0;
}

/*
//���ַ�����
#include <iostream>
#include <cstring>
using namespace std;
const int NAME_LEN=20;
const int TABLE_LEN=100;
struct TableItem
{ char name[NAME_LEN];
  // ...... //������Ϣ
};	
TableItem name_table[TABLE_LEN]={"����","�Ϻ�","�Ͼ�","����","�人" ,"������","����"};

int binary_search(char key[], TableItem t[], int num_of_items)
{	int index,first,last;
	first = 0;
	last = num_of_items-1;
	while (first <= last)
	{	index = (first+last)/2;
		int r=strcmp(key,t[index].name);
		if (r == 0)  // key����t[index].name
			return index;
		else if (r > 0)  // key����t[index].name
			first = index+1;
		else  //keyС��t[index].name
			last = index-1;
	}
	return -1;
}

int max(TableItem x[],int n) //����x�����Ԫ�ص��±�
{	int i,j;
	j = 0; 	//j���ڱ������Ԫ�ص��±꣬���ȼ����0��Ԫ�����
	for (i=1; i<n; i++)
		if (strcmp(x[i].name,x[j].name) > 0) j = i;  //�޸�j��ֵ��ʹ��һֱΪ���Ԫ�ص��±ꡣ
	return j;
}

void sel_sort(TableItem x[], int n)
{ int i,j;	
	for (i=n; i>1; i--) 
	{	j = max(x,i);  //����x��ǰi��Ԫ�������Ԫ�ص��±�j��
		//����x[j]��x[i-1]��ֵ
		TableItem temp;
    temp = x[j];
		x[j] = x[i-1];
		x[i-1] = temp;
	}
}

int main()
{ 
  sel_sort(name_table,7);
  for (int i=0; i<7; i++)
    cout << name_table[i].name << ' ';
  cout << endl;

	int result;
	result = binary_search("�Ͼ�",name_table,7);
	cout << "�Ͼ�: " << result << endl;
	return 0;
}
*/