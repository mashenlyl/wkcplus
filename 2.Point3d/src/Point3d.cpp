/*
 * Point3d.cpp
 *
 *  Created on: 2017��1��13��
 *      Author: LYL
 */
#include <iostream>
using namespace std;

class Point3d
{
public:
	// �����ͬʱ������г�ʼ��
	Point3d(float a, float b, float c);
	// ��ķ���
	void print();

//���������������
private:
	float x;
	float y;
	float z;
};

// ��Ա����������Ķ��巽ʽ
void Point3d::print(void)
{
	cout << "x = " << x << " y = " << y << " z = " << z <<endl;
}

Point3d::Point3d(float a, float b, float c)
{
	x = a;
	y = b;
	z = c;
}
/*
int main()
{
	Point3d a(1, 2, 3);
	a.print();
}
*/


