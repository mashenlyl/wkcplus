/*
 * constructor.cpp
 *
 *  Created on: 2017��1��13��
 *      Author: LYL
 */

#include <iostream>
using namespace std;

class A
{
public:
	A(int);
	~A();
	int i;
};

A::A(int a)
{
	i = a;
	cout << i << endl;
}

A::~A()
{
	cout << i << endl;
}

int main()
{
	A a(1);
	{
		A b(2);
	}
	A c(3);

	return 0;
}


