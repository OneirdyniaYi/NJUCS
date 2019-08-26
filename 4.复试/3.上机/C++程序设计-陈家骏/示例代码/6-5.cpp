#include <iostream>
#include <cstdlib>
using namespace std;
class Matrix  //������
{		int *p_data;  //��ʾ��������
		int row,col;  //��ʾ���������������
	public:
		Matrix(int r, int c) 
		{	if (r <= 0 || c <= 0)
			{	cerr << "����ߴ粻�Ϸ���\n";
				exit(-1);
			}
			row = r;	col = c;
			p_data = new int[row*col];
		}
		~Matrix() 
		{ delete []p_data; 
		}
		int &element(int i, int j) //���ʾ���Ԫ�ء�
		{	if (i < 0 || i >= row || j < 0 || j >= col)
			{	cerr << "�����±�Խ��\n";
				exit(-1);
			}
			return *(p_data+i*col+j);
		}
		int element(int i, int j) const //���ʾ���Ԫ�أ�Ϊ����������ṩ����
		{	if (i < 0 || i >= row || j < 0 || j >= col)
			{	cerr << "�����±�Խ��\n";
				exit(-1);
			}
			return *(p_data+i*col+j);
		}
		int dimension_row() const //��þ����������
		{	return row;
		}
		int dimension_column() const //��þ����������
		{	return col;
		}
		void display() const //��ʾ����Ԫ�ء�
		{	int *p=p_data; 
			for (int i=0; i<row; i++)
			{	for (int j=0; j<col; j++)
				{ cout << *p << ' ';
					p++;
				}
				cout << endl;
			}
		}
};
class Vector  //������
{		int *p_data;
		int num;
	public:
		Vector(int n)
		{	if (n <= 0) 
			{	cerr << "�����ߴ粻�Ϸ���\n"; 
				exit(-1);
			}
			num = n;
			p_data = new int[num];
		}
		~Vector()
		{	delete []p_data;
		}
		int &element(int i) //��������Ԫ�ء�
		{	if (i < 0 || i >= num)
			{	cerr << "�����±�Խ�磡\n";
				exit(-1);
			}
			return p_data[i];
		}
		int element(int i) const //��������Ԫ�أ�Ϊ����������ṩ����
		{	if (i < 0 || i >= num)
			{	cerr << "�����±�Խ�磡\n";
				exit(-1);
			}
			return p_data[i];
		}
		int dimension() const //���������ĳߴ硣
		{	return num;
		}
		void display() const //��ʾ����Ԫ�ء�
		{	int *p=p_data;
			for (int i=0; i<num; i++,p++)
				cout << *p << ' ';
			cout << endl;
		}
};
void multiply(const Matrix &m, const Vector &v, Vector &r)//������������ˡ�
{	if (m.dimension_column() != v.dimension() || 
			m.dimension_row() != r.dimension())
	{	cerr << "����������ĳߴ粻ƥ�䣡\n";
		exit(-1);
	}
	int row=m.dimension_row(),col=m.dimension_column();
	for (int i=0; i<row; i++)
	{	r.element(i) = 0;
		for (int j=0; j<col; j++)
			r.element(i) += m.element(i,j)*v.element(j);
	}
}
int main()
{	int row,column;
	cout << "����������������������";
	cin >> row >> column;
	Matrix m(row,column);
	Vector v(column);
	Vector r(row);
	cout << "���������Ԫ�أ�\n";
	int i,j;
	for (i=0; i<row; i++)
		for (j=0; j<column; j++)
			cin >> m.element(i,j);
	cout << "����������Ԫ�أ�\n";
	for (i=0; i<column; i++)
		cin >> v.element(i);	

	multiply(m,v,r);
	
	cout << "����\n";
	m.display();
	cout << "��������\n";
	v.display();
	cout << "�ĳ˻�Ϊ��\n";
	r.display();
	return 0;
}

//������Ԫʵ��ȫ�ֺ���multiply��
/*
#include <iostream>
#include <cstdlib>
using namespace std;
class Vector; //�����ڶ���Vectorǰ��Ҫ�õ�����
class Matrix  //������
{		int *p_data;  //��ʾ��������
		int row,col;  //��ʾ���������������
	public:
		Matrix(int r, int c) 
		{	if (r <= 0 || c <= 0)
			{	cerr << "����ߴ粻�Ϸ���\n";
				exit(-1);
			}
			row = r;	col = c;
			p_data = new int[row*col];
		}
		~Matrix() 
		{ delete []p_data; 
		}
		int &element(int i, int j) //���ʾ���Ԫ�ء�
		{	if (i < 0 || i >= row || j < 0 || j >= col)
			{	cerr << "�����±�Խ��\n";
				exit(-1);
			}
			return *(p_data+i*col+j);
		}
		int element(int i, int j) const //���ʾ���Ԫ�أ�Ϊ����������ṩ����
		{	if (i < 0 || i >= row || j < 0 || j >= col)
			{	cerr << "�����±�Խ��\n";
				exit(-1);
			}
			return *(p_data+i*col+j);
		}
		int dimension_row() const //��þ����������
		{	return row;
		}
		int dimension_column() const //��þ����������
		{	return col;
		}
		void display() const //��ʾ����Ԫ�ء�
		{	int *p=p_data; 
			for (int i=0; i<row; i++)
			{	for (int j=0; j<col; j++)
				{ cout << *p << ' ';
					p++;
				}
				cout << endl;
			}
		}
	friend void multiply(const Matrix &m, const Vector &v, Vector &r); 
														//������ǰ�õ�Vector��
};
class Vector  //������
{		int *p_data;
		int num;
	public:
		Vector(int n)
		{	if (n <= 0) 
			{	cerr << "�����ߴ粻�Ϸ���\n"; 
				exit(-1);
			}
			num = n;
			p_data = new int[num];
		}
		~Vector()
		{	delete []p_data;
		}
		int &element(int i) //��������Ԫ�ء�
		{	if (i < 0 || i >= num)
			{	cerr << "�����±�Խ�磡\n";
				exit(-1);
			}
			return p_data[i];
		}
		int element(int i) const //��������Ԫ�أ�Ϊ����������ṩ����
		{	if (i < 0 || i >= num)
			{	cerr << "�����±�Խ�磡\n";
				exit(-1);
			}
			return p_data[i];
		}
		int dimension() const //���������ĳߴ硣
		{	return num;
		}
		void display() const //��ʾ����Ԫ�ء�
		{	int *p=p_data;
			for (int i=0; i<num; i++,p++)
				cout << *p << ' ';
			cout << endl;
		}
	friend void multiply(const Matrix &m, const Vector &v, Vector &r); 
};

void multiply(const Matrix &m, const Vector &v, Vector &r)
{	if (m.col != v.num || m.row != r.num)
	{	cerr << "����������ĳߴ粻ƥ�䣡\n";
		exit(-1);
	}
	int *p_m=m.p_data,*p_r=r.p_data,*p_v;
	for (int i=0; i<m.row; i++)
	{	*p_r = 0;
		p_v = v.p_data;
		for (int j=0; j<m.col; j++)
		{	*p_r += (*p_m)*(*p_v);
			p_m++;
			p_v++;
		}
		p_r++;
	}
}

int main()
{	int row,column;
	cout << "����������������������";
	cin >> row >> column;
	Matrix m(row,column);
	Vector v(column);
	Vector r(row);
	cout << "���������Ԫ�أ�\n";
	int i,j;
	for (i=0; i<row; i++)
		for (j=0; j<column; j++)
			cin >> m.element(i,j);
	cout << "����������Ԫ�أ�\n";
	for (i=0; i<column; i++)
		cin >> v.element(i);	

	multiply(m,v,r);
	
	cout << "����\n";
	m.display();
	cout << "��������\n";
	v.display();
	cout << "�ĳ˻�Ϊ��\n";
	r.display();
	return 0;
}
*/
