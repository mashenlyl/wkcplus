/*
 * reference.cpp
 *
 *  Created on: 2017��1��18��
 *      Author: LYL
 */
#include <iostream>
using namespace std;

int a;

int &func(int t)
{
	a = t;
	return a;
}

class A
{
public:
	A():i(1){}
	int i;
};
A f(int c)
{
	A a;
	a.i = c;
	return a;
}

void g(const int& c)
{

}

int main()
{
	int d = 40;
	g(d*3);

	A b;
	b = f(20);
	cout << b.i << endl;
	//f().i = 10;
	cout << f(30).i << endl;

	int j = 0;
	j = func(4);		// �ȼ��ڣ�j = a
	func(5) = 3;		// �ȼ��ڣ�a = 3
	cout << "a = " << a << endl;
	cout << "j = " << j << endl;


	return 0;
}


