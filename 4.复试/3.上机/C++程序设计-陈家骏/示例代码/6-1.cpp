#include <iostream>
#include <cstdio>
using namespace std;
class Stack
{	public:
		Stack() { top = NULL; }
		~Stack() 
    { while (top != NULL)
      { Node *p=top;
        top = top->next;
        delete p;
      } 
    }
		bool push(int i);
		bool pop(int& i);
	private:
		struct Node
		{	int content;
			Node *next;
		} *top;
};
bool Stack::push(int i)
{	Node *p=new Node;
	if (p == NULL)  
	{	cout << "Stack is overflow.\n";
		return false;
	}
	else
	{	p->content = i;
		p->next = top;
		top = p;
		return true;
	}
}
bool Stack::pop(int& i)
{	if (top == NULL) 
	{	cout << "Stack is empty.\n";
		return false;
	}
	else 
	{	Node *p=top;
		top = top->next;
		i = p->content;
		delete p;
		return true;
	}
}

int main()
{ Stack st;  //�Զ���ȥ����st.Stack()��st���г�ʼ����
  int x;
  st.push(12);  //��12�Ž�ջst��
  st.pop(x);  //��ջ��Ԫ����ջ���������x��
  cout << x << endl;
  return 0;
}