template <class T> 
void sort(T elements[], unsigned int count)
{	/*
	1��ȡ��i��Ԫ��
	elements[i] 
	
	2���Ƚϵ�i���͵�j��Ԫ�صĴ�С
	elements[i] < elements [j] 
	
	3��������i���͵�j��Ԫ��
	T temp=elements [i];
	elements[i] = elements [j];
	elements[j] = temp;
	*/
}

class A
{ //......
  public:
    bool operator < (const A &a);
};

int main()
{ int a[100];
  sort(a,100);  //����void sort(int elements[], unsigned int count)
  double b[200]; 
  sort(b,200);  //����void sort(double elements[], unsigned int count)
  A c[300];  //��A�������ز�������<����Ҫʱ��Ӧ�Զ��忽�����캯�������ز�����=��
  sort(c,300);  //����void sort(A elements[], unsigned int count)
  return 0;
}