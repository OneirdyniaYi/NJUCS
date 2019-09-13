#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;
const int MAX_NUM_OF_COURSES=30;
const int MAX_ID_LEN=10;
const int MAX_NAME_LEN=8;
class StudentScores
{	public:
		StudentScores() { initialized = false; }
		bool data_is_ok() { return initialized; }
		const char *get_id() const { return id; }
		const char *get_name() const { return name; }
		int average_score() const
		{	int total=0;
			for (int i=0; i<num_of_courses; i++)
					total += scores[i];
			return total/num_of_courses;
		}
	private:	
		int scores[MAX_NUM_OF_COURSES],num_of_courses;
		char id[MAX_ID_LEN+1],name[MAX_NAME_LEN+1];
		bool initialized;
	friend istream &operator >>(istream &in, StudentScores &x);
	friend ostream &operator <<(ostream &out, StudentScores &x);
};
istream &operator >>(istream &in, StudentScores &x)
{	if (&in == &cin) //�Ӽ�������ʱ��Ҫ������ʾ��
		cout << "������ѧ�š�������ѡ���������ſγɼ�����ѧ��Ϊ'E'��������\n";
	in >> setw(11) >> x.id; //����ѧ�š�
	if (in.eof() || x.id[0] == 'E') //�н�����ǡ�
	{	x.initialized = false;
		return in;
	}
	in >> setw(9) >> x.name; //����������
	in >> x.num_of_courses; //����ѡ������
	if (x.num_of_courses > MAX_NUM_OF_COURSES)
	{	x.initialized = false;
		return in;
	}
	for (int i=0; i<x.num_of_courses; i++) //ѭ��������ſγɼ���
		in >> x.scores[i];
	x.initialized = true;
	return in;
}
ostream &operator <<(ostream &out, StudentScores &x)
{	out << x.id << ' ' //���ѧ�š�
			<< x.name << ' ' //���������
			<< x.num_of_courses; //���ѡ������
	for (int i=0; i<x.num_of_courses; i++) //ѭ��������ſγɼ���
		out << ' ' << x.scores[i];
	return out;
}
int main()
{	ifstream in_file("d:\\scores.txt",ios::in); //���ı���ʽ���ļ��������롣
	if (!in_file) //���ļ����Ƿ�ɹ���
	{	cerr << "���ļ�ʧ�ܣ�\n";
		return -1;
	}
	cout 	<< "ѧ�ţ�������ƽ���ɼ���\n";
	StudentScores st;
	in_file >> st;
	while (st.data_is_ok())
	{	cout 	<< st.get_id() << ','
					<< st.get_name() << ','
					<< st.average_score() << endl;
		in_file >> st;
	}
	in_file.close(); //�ر��ļ���
  return 0;
}
