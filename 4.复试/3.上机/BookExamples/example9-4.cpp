template <class T, int size> 
class Stack
{		T buffer[size];
		int top;
	public:
		Stack() { top = -1; }
		bool push(const T &x);
		bool pop(T &x);
};
template <class T,int size> 
bool Stack <T,size>::push(const T &x) { /*......*/ return true; }

template <class T, int size> 
bool Stack <T,size>::pop(T &x) { /*......*/ return true; }

int main()
{ Stack<int,100> st1; //����һ�������100��int��Ԫ�������ɵ�ջ����
  Stack<double,200> st2; //����һ�������200��double��Ԫ�������ɵ�ջ����
  //.......
  return 0;
}
