/*
 * reference.cpp
 *
 *  Created on: 2017年1月16日
 *      Author: LYL
 */
#include <iostream>
using namespace std;

class A
{
public:
	// 注意构造函数参数这里要用引用类型的参数，用int类型的是起不到引用的效果的，并且也不会报错；这里的a就变成了x的引用的
	// A(int x):a(x){ a = 400; cout << "A::A()" << x << endl; };
	// 这里的a就是下面s的引用了，所以，一定要注意；
	A(int &x):a(x){ a = 400; cout << "A::A()" << x << endl; };
	void set(int value){ a = value; cout << a << endl; };
private:
	int &a;

};

void func(int &c){}
void func(int c){}

int main()
{
	int *x1;

	// 没有引用类型的指针，所以就没有引用数组了,也就不知道引用变量的地址了
	int &ff[3];
	int &* p;
	int *& p1 = x1;		// 有指针类型的引用

	int x = 10;
	int y = 30;
	int &d = x;
	int &f = y;
	d = f;
	cout << d << endl;

	int s = 10;
	A a(s);
	void func(int &a);
	func(s*3);
	a.set(80);
	cout << s << endl;

	return 0;
}

