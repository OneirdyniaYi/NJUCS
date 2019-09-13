#include <iostream>
#include <cstdlib>
using namespace std;
struct Line
{	double x1,y1,x2,y2;
};
struct Rectangle
{	double left,top,right,bottom;
};
struct Circle
{	double x,y,r;
};
union Figure
{	Line line;
	Rectangle rect;
	Circle circle; 
};
enum FigureShape { LINE, RECTANGLE, CIRCLE };
struct TaggedFigure
{	FigureShape shape;
	Figure figure; 
};
const int MAX_NUM_OF_FIGURES=100;
TaggedFigure figures[MAX_NUM_OF_FIGURES];
extern void draw_line(Line line);  //���ߺ���
extern void draw_rectangle(Rectangle rect);  //�����κ���
extern void draw_circle(Circle circle);  //��Բ����
int main()
{	//����ͼ������
	int count;
	for (count=0; count<MAX_NUM_OF_FIGURES; count++)
	{	int shape;
		do
		{	cout << "������ͼ�ε�����(0���߶Σ�1�����Σ�2��Բ��-1������)��";
			cin >> shape;
		} while (shape < -1 || shape > 2);
		if (shape == -1) break;
		switch (shape)
		{ 	case 0: //��
				figures[count].shape = LINE;
				cout << "�������߶ε������յ����� (x1,y1,x2,y2) ��";
				cin >> figures[count].figure.line.x1 
						>> figures[count].figure.line.y1 
					 	>> figures[count].figure.line.x2 
						>> figures[count].figure.line.y2;
  	 			break;
 		  case 1: //����
				figures[count].shape = RECTANGLE;
				cout << "��������ε����ϽǺ����½����� (x1,y1,x2,y2) ��";
				cin >> figures[count].figure.rect.left 
						>> figures[count].figure.rect.top 
					 	>> figures[count].figure.rect.right 
						>> figures[count].figure.rect.bottom;
				break;
 		  case 2: //Բ��
				figures[count].shape = CIRCLE;
				cout << "������Բ��Բ������Ͱ뾶 (x,y,r) ��";
				cin >> figures[count].figure.circle.x 
						>> figures[count].figure.circle.y 
					 	>> figures[count].figure.circle.r;
  	 		break;
	 	}
	}
	//�������ͼ��
	for (int i=0; i<count; i++)
	{	switch (figures[i].shape)
		{ 	case LINE:
					draw_line(figures[i].figure.line);
					break;
			case RECTANGLE:
 					draw_rectangle(figures[i].figure.rect);
					break;
			case CIRCLE:
 					draw_circle(figures[i].figure.circle);
 					break;
 		}
	}
	return 0;
}
