#include<iostream>
using namespace std;
class arithmetic
{
public:
	int a;
	int b;
	inline int sum(int x, int y)
	{
		a = x;
		b = y;
		return (a + b);
	}
	inline int prod(int x, int y)
	{
		a = x;
		b = y;
		return (a*b);
	}
	inline int div(int x, int y)
	{
		a = x;
		b = y;
		return(a / b);
		if (b == 0)
		{
			return(-1);
		}
	}
	inline int sub(int x, int y)
	{
		a = x;
		b = y;
		return(a - b);
	}
	inline int mod(int x, int y)
	{
		a = x;
		b = y;
		return (a%b);
	}
	
};
int main()
{
	arithmetic a;
	cout << "sum:" << a.sum(8+1, 2)<<endl;
	cout << "product:" << a.prod(8+1, 2) << endl;
	cout << "didvision:" << a.div(8+1, 2) << endl;
	cout << "subtract:" << a.sub(8+1, 2) << endl;
	cout << "modulus:" << a.mod(8, 2) << endl;
	//system("pause");
	getchar();

}