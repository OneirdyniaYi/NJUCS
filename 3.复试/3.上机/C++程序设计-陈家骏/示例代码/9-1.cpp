void sort(void *base, //������������׵�ַ
			     unsigned int count, //����Ԫ�صĸ���
				   unsigned int element_size, //����Ԫ�صĳߴ�
				   int (*cmp)(const void *, const void *) 
									//�Ƚ���������Ԫ�ش�С�ĺ���ָ��
				)
{	/*
	���۲��ú��������㷨��һ�㶼��Ҫ������������²�����	
	1��ȡ��i��Ԫ��
	(char *)base+i*element_size
	
	2���Ƚϵ�i���͵�j��Ԫ�صĴ�С 
	(*cmp)((char *)base+i*element_size,(char *)base+j*element_size)
	
	3��������i���͵�j��Ԫ��
	char *p1=(char *)base+i*element_size,
			 *p2=(char *)base+j*element_size;
	for (int k=0; k<element_size; k++)
	{	char temp=p1[k];
		p1[k] = p2[k];
		p2[k] = temp;
	}
	*/
}
int int_compare(const void *p1, const void *p2)  
//�Ƚ�int����Ԫ�ش�С��
{	if (*(int *)p1 < *(int *)p2) 
		return -1;
	else if (*(int *)p1 > *(int *)p2) 
		return 1;
	else 
		return 0;
}
int double_compare(const void *p1, const void *p2) 
//�Ƚ�double����Ԫ�ش�С��
{	if (*(double *)p1 < *(double *)p2) 
		return -1;
	else if (*(double *)p1 > *(double *)p2) 
		return 1;
	else 
		return 0;
}

class A
{ //......
  public:
    bool operator < (const A &a);
    bool operator > (const A &a);
};

int A_compare(const void *p1, const void *p2) 
//�Ƚ�A��Ԫ�ش�С��
{	if (*(A *)p1 < *(A *)p2)  //��A�����ز�������<
		return -1;
	else if (*(A *)p1 > *(A *)p2)  //��A�����ز�������>
		return 1;
  else 
		return 0;
}
int main()
{ int a[100];
  sort(a,100,sizeof(int),int_compare);
  double b[200];
  sort(b,200,sizeof(double),double_compare);
  A c[300];
  sort(c,300,sizeof(A),A_compare);
  //......
  return 0;
}