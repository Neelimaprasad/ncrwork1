#include<iostream>
using namespace std;
struct __stack__
{
	int top;
	int *s;
	int size;
}sta;
class stack
{
	struct __stack__ sta;
public:
	stack();
	void push(int n);
	int pop();
	int peek();
	bool IsEmpty();
	bool IsFull();
	void display();
	~stack();
	void getsize(int);
};
stack::stack()
{
	sta.top = -1;
	sta.s = NULL;
	sta.size = 0;
}
bool stack::IsEmpty()
{
	return(sta.top ==-1);
}
bool stack::IsFull()
{
	return(sta.top ==(sta.size - 1));
}
void stack::getsize(int n)
{
	//for dynamic allocation of size of stack
	sta.size = n;
	sta.s = new int[n];
}
void stack::push(int ele)
{
	if (!IsFull())
	{
		sta.s[++sta.top] = ele;
	}
	else
		cout << "stack is full" << endl;
}
int stack::pop()
{
	int x = -999;
	if (!IsEmpty())
	{
		x = sta.s[sta.top--];
	}
	else
		cout << "stack is empty" << endl;
	return x;
}
int stack::peek()
{
	int x = -999;
	if (!IsEmpty())
	{
		x = sta.s[sta.top];
		cout << "top element:" << x << endl;
	}
	else
		cout << "stack is empty" << endl;
	return x;
}
void stack::display()
{
	for (int i = 0; i <= sta.top; i++)
	{
		cout << sta.s[i];
	}
}
stack :: ~stack()
{
	delete sta.s;
}


int main()
{
	stack s1;
	s1.getsize(20);
	s1.push(1);
	s1.push(2);
	s1.push(3);
	s1.push(5);
	s1.push(6);
	s1.pop();
	s1.peek();
	s1.display();

	system("pause");
	getchar();
	return 0;
}