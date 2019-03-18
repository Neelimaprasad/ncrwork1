#include<iostream>
using namespace std;

class complex
{
public:
	int real;
	int img;
	complex()
	{

	}
	complex(int a)
	{
		real = a;
		img = a;

	}
	complex(int a, int b)
	{
		real = a;
		img = b;
	}
	friend complex sum(complex &,complex &);
	friend complex prod(complex &, complex &);


};
complex sum(complex &c1, complex &c2)
{
	complex temp;
	temp.real = c1.real + c2.real;
	temp.img = c1.img + c2.img;
	cout << "sum:"<< temp.real<<"+"<<temp.img <<endl;
	return temp;
	
}
complex prod(complex &c1, complex &c2)
{
	complex temp;
	temp.real = c1.real*c2.real;
	temp.img = c1.img*c2.img;
   cout << "product:" << temp.real << "+" << temp.img << endl;
	return temp;
}
int main()
{
	complex c1(2,3),c2(4,5),c3;
	cout << "results:" << endl;
	c3=sum(c1, c2);
  c3=prod(c1, c2);
   getchar();
   return 0;
}
