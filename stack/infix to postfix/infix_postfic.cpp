#include<iostream>
#include<string.h>
using namespace std;
struct infix_postfix
{
	char *s;
	int top;
	int size;
}in;
class infix
{
	struct infix_postfix in;
public:
	infix();
	void push(char ele);
	bool IsFull();
	void calculate();
	char pop();
	bool IsEmpty();
	int peek();
	//void display();
	void getsize(int n);
	void precedence(char ele);

};
infix::infix()
{
	
	in.top = -1;
	in.s = NULL;
	in.size = 0;
}
void infix::getsize(int n)
{
	in.size = n;
	in.s= new char[n];
}
int infix::peek()
{
	int x;
	if (!IsEmpty())
	{
		x = in.s[in.top];
		cout << "top element:" << x << endl;
	}
	else
		cout << "stack is empty" << endl;

	return x;
}
bool infix::IsFull()
{
	return(in.top == (in.size - 1));
}
bool infix::IsEmpty()
{
	return(in.top == -1);
}
void infix::push(char ele)
{
	if (!IsFull())
	{
		in.s[++in.top] = ele;
	}
	else
		cout << "stack is full" << endl;
}
void infix::calculate()
{
	char cch[10],a[20];
	cout << "enter string:" << endl;
	
	cin >> cch;
	char ch;
	int i = 0,j=0;
	while (i < strlen(cch))
	{
		if(isalpha(cch[i]))
			{
			a[j] = cch[i];
			j++;
		}
		else
		{
			precedence(cch[i]);
		
		}
		i++;
	}
	for (j = 0; j < strlen(a); j++)
		cout << a[j] << endl;
}
char infix::pop()
{
	int x = -999;
	if (!IsEmpty())
	{
		x = in.s[in.top--];
	}
	else
		cout << "stack is empty" << endl;
	return x;
}
/*void infix::display()
{
	for (int i = 0; i <= in.top; i++)
	{
		cout << in.s[i];
	}
}*/
void infix::precedence(char ele)
{
	int p = peek();
	if (IsEmpty())
	{
		push(ele);
	}
	else if ((p == '*'&&ele == '+') || (p == '*'&&ele == '-'))
	{
		cout<<pop();
		in.s[++in.top] = ele;

	}
	else if ((p == '/'&&ele == '+') || (p == '/'&&ele == '-'))
	{
		cout<<pop();
		in.s[++in.top] = ele;
	}

	else if ((p == '+'&&ele == '-') || (p == '-'&&ele == '+'))
	{
		cout<<pop();
		in.s[++in.top] = ele;
	}
}
int main()
{
	{infix s1;
	s1.getsize(20);
	/*s1.push('a');
	s1.push('+');
	s1.push('b');
	s1.push('*');
	s1.push('c');*/
	//s1.peek();
	s1.calculate(); }
	
	
	//s1.display();

	system("pause");
	getchar();
	return 0;
}