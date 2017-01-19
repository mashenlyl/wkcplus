/*
 * vitual.cpp
 *
 *  Created on: 2017��1��16��
 *      Author: LYL
 */
#include <iostream>
using namespace std;

class Shape
{
public:
	virtual Shape *newkk(){ cout << "Shape::newkk(int a)" << endl; }
	virtual Shape &newk(){ cout << "Shape::newk(int a)" << endl; }
	virtual Shape newh(){}
	void move(){ cout << "Shape::move()" << endl;};
	virtual void render(){ cout << "Shape::render()" << endl; };
	// ������������û��render��int a���Ļ����⺯���ͱ�������
	virtual void render(int a){ cout << "Shape::render(int)" << endl; }
	virtual ~Shape(){};
private:
	int center;
};

class Rectangle:public Shape
{
public:
	virtual void render(){ cout << "Rectangle::render()" << endl; };
};

class Ellipse:public Shape
{
public:
	virtual Shape *newkk(){ cout << "Ellipse::newkk(int a)" << endl; }
	virtual Ellipse &newk(){ cout << "Ellipse::newk(int a)" << endl; }
	virtual Shape newh(){}
	// �������û�м��ϴ����ţ���ֻ������������������û�ж���������캯��
	Ellipse(float maj, float minr){};
	virtual void render(){ cout << "Ellipse::render(int a)" << endl; };
	//virtual void lender(int a){ cout << "Ellipse::render(int)" << endl; }
	virtual ~Ellipse(){};
};

class Circle:public Ellipse
{
public:
	Circle(float radiums):Ellipse(radiums, radiums){};
	void render(){ cout << "Circle::render(int a, int b)" << endl; };
	//virtual void render(int a){ cout << "Circle::render(int)" << endl; }
};

void render(Shape* p)
{
	p->render();
	p->render(2);
	p->newkk();
	p->newk();
	//p->lender(2);
	p->move();
}
int main()
{

	Shape S;
	cout << sizeof(S) << endl;
	Ellipse ell(10,20);
	Ellipse *p1;

	//Shape * p = p1;
	// ����ֻ�Ǹ�ֵ
	//S = ell;
	// �����vtable��ֵ���ı���
	//int *r = (int *)&S;
	//int *t = (int *)&ell;
	//*r = *t;
	//p->render();

	ell.render();
	Circle circ(13);
	circ.render();
	render(&ell);
	render(&circ);

	return 0;
}

