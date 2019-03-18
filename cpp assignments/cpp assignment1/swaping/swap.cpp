#include<iostream>
using namespace std;
class swapfunction
{
public:
	int a, b;
	swapfunction()
	{
		a = b = 0;
	}
	swapfunction(int a1, int b1)
	{
		a = a1;
		b = b1;
		int temp = a;
		a = b;
		b = temp;
		cout << "after swapfunction using call by value:" << a << b << endl;
	}
	swapfunction(swapfunction &s)
	{
		swapfunction temp;
		temp.a = s.a;
		temp.b = s.b;
		cout << "after swapfunction using call by reference:" << temp.a << temp.b << endl;

		
	}
};
int main()
{
	
	swapfunction s2;
	swapfunction s(2, 3);
	swapfunction s1(s);
	system("pause");
}