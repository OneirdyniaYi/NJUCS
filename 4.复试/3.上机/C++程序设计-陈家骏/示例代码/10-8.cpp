#include <iostream>
#include <fstream>
#include <iomanip>
#include <cstring>
using namespace std;
enum Sex { MALE, FEMALE };
struct Date
{	int year;
	int month;
	int day;
};
enum Major { MATHEMATICS, PHYSICS, CHEMISTRY, COMPUTER, GEOGRAPHY,
							ASTRONOMY, ENGLISH, CHINESE, PHILOSOPHY};
struct Student
{	char id[11];
	char name[9];
	Sex sex;
	Date birth_date;
	char birth_place[40];
	Major major;
};
class StudentsFile
{	public:
		StudentsFile(const char filename[])
		{	io_file.open(filename,ios::in|ios::out|ios::binary);
		}
		~StudentsFile()
		{	io_file.close();
		}
		bool is_open() const { return io_file.is_open(); }
		int find(char id[],Student &st) //����ѧ��Ϊid��ѧ����
		{	int index=0;
			io_file.seekg(0);
			io_file.read((char *)&st,sizeof(st)); //�����һ��ѧ�������ݡ�
			while (!io_file.eof()) //ѭ������ѧ��Ϊid��ѧ����
			{	if (strcmp(st.id,id) == 0) 
					return index; //�����ҵ���ѧ�����ļ��е�λ�á�
				index++;
				io_file.read((char *)&st,sizeof(st)); //������һ��ѧ�������ݡ�
			}
			return -1; //û�ҵ�����-1��
		}
		bool put_at(int index,Student &st) //�����ļ���ָ��λ���ϵ�ѧ����Ϣ��
		{	io_file.seekp(index*sizeof(st)); //�ļ�λ��ָ�붨λ��
			if (io_file.fail()) return false;
			io_file.write((char *)&st,sizeof(st)); //д�����ݡ�
			return !io_file.fail();
		}
	private:
		fstream io_file; //�����ļ�����/����ĳ�Ա����
};
int main()
{	StudentsFile students_file("d:\\students.dat");
	if (!students_file.is_open())
	{	cerr << "�ļ���ʧ�ܣ�";
		return -1;
	}
	char id[11];
	int major;
	cout << "������Ҫ���ҵ�ѧ����ѧ�ţ�";
	cin >> setw(11) >> id;
	cout << "������Ҫ�ĳɵ�רҵ\n"
			 << "(0:MATHEMATICS,1:PHYSICS,2:CHEMISTRY,3:COMPUTER,\n"
			 << "4:GEOGRAPHY,5:ASTRONOMY,6:ENGLISH,7:CHINESE,8:CHINESE)��";	
	cin >> major;
	Student st;
	int i=students_file.find(id,st);
	if (i == -1)
	{	cout << "\nû�ҵ�ѧ��Ϊ" << id << "��ѧ����\n";
		return -1; 
	}
	else
	{	st.major = (Major)major; //�޸��ҵ���ѧ����רҵ��
		students_file.put_at(i,st);
		cout << "\nѧ��Ϊ" << id << "��ѧ����Ϣ�Ѹ��¡�\n";
	}
  return 0;
}
