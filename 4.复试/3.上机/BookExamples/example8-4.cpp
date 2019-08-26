#include <iostream>
#include <cstring>
using namespace std;

#include <iostream>
using namespace std;
class Figure
{	public:
		virtual void draw() const=0;
		virtual void input_data()=0;
};
class Rectangle: public Figure
{		double left,top,right,bottom;
	public:
		void draw() const
		{	//...... //������
		}
		void input_data()
		{	cout << "��������ε����ϽǺ����½����� (x1,y1,x2,y2) ��";
			cin >> left >> top >> right >> bottom;
		}
		double area() const { return (bottom-top)*(right-left); }
};
const double PI=3.1416;
class Circle: public Figure
{		double x,y,r;
	public:
		void draw() const
		{	//...... //��Բ
		}
		void input_data()
		{	cout << "������Բ��Բ������Ͱ뾶 (x,y,r) ��";
			cin >> x >> y >> r;
		}
		double area() const { return r*r*PI; }
};
class Line: public Figure
{		double x1,y1,x2,y2;
	public:
		void draw() const
		{	//...... //����
		}
		void input_data()
		{	cout << "�������߶ε������յ����� (x1,y1,x2,y2) ��";
			cin >> x1 >> y1 >> x2 >> y2;
		}
		double area() const { return 0.0; }
};
const int MAX_NUM_OF_FIGURES=100;
enum FigureShape { LINE, RECTANGLE, CIRCLE };
class FigureGroup  //ͼ�ζ��������
{		Figure *figures_buf[MAX_NUM_OF_FIGURES];
		int num_of_figures;
	public:
		FigureGroup() { num_of_figures = 0; }
		void display_figures()
		{ for (int i=0; i<num_of_figures; i++)	
				figures_buf[i]->draw();  //ͨ����̬�󶨵�����Ӧ���draw��
		}
		void input_figures_data()
		{	for (num_of_figures=0; num_of_figures<MAX_NUM_OF_FIGURES;
					num_of_figures++)
			{	int shape;
				do
				{	cout << "������ͼ�ε�����(0���߶Σ�1�����Σ�2��Բ��-1������)��";
					cin >> shape;
				} while (shape < -1 || shape > 2);
				if (shape == -1) break;
				switch (shape)
				{	case LINE: //��
						figures_buf[num_of_figures] = new Line;
   					break;
					case RECTANGLE: //����
						figures_buf[num_of_figures] = new Rectangle;
						break;
					case CIRCLE: //Բ
						figures_buf[num_of_figures] = new Circle;
   					break;
 				}
				figures_buf[num_of_figures]->input_data(); //ͨ����̬�󶨵�����Ӧ���input_data��
			}
		}
};
FigureGroup figures;  //������һ��FigureGroup ���ȫ�ֶ���
int main()
{	//����ͼ������
	figures.input_figures_data();
	//�������ͼ��
	figures.display_figures();
	return 0;
}
