#include <iostream>
#include <cstring>
using namespace std;

class LinearList
{		//......
	public:
		bool insert(int x, int pos); //�����Ա���λ��pos��������Ԫ�ء�
												  //��posΪ0ʱ���ڱ�ͷ����Ԫ�أ�
												  //����ֵ��ʾ�����ɹ���ʧ�ܡ�
		bool remove(int &x, int pos); //ɾ�����Ա���λ��pos����Ԫ�ء�
												   //����ֵ��ʾ�����ɹ���ʧ�ܡ�
		int element(int pos) const; //����λ��pos����Ԫ�ء�
		int search(int x) const; //����ֵΪx��Ԫ�أ�����Ԫ�ص�λ�á�δ�ҵ�ʱ����0��
		int length() const; //����Ԫ�ظ�����
};

//�ü̳�ʵ��Queue
class Queue: private LinearList //����ļ̳з�ʽprivate����ʡ�ԡ�
{	public:
		bool en_queue(int x) //Ԫ�ؽ��ӡ�
		{	return insert(x,length());
		}
		bool de_queue(int &x) //Ԫ�س��ӡ�
		{ return remove(x,1);
		}
};

/*
//�þۼ�ʵ��Queue
class Queue
{		LinearList list;
	public:
		bool en_queue(int i) 
		{	return list.insert(i,list.length());
		}
		bool de_queue(int &i) 
		{ return list.remove(i,1);
		}
};
*/