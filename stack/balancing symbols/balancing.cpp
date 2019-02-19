#include<iostream>
using namespace std;
struct balance
{
	int top;
 char *s;
	int size;
}bal;
class balancing
{
	struct balance bal;
public:
	balancing();
	void push(char ele);
	bool IsFull();
	void calculate();
	char pop(char );
	bool IsEmpty();
	int peek();
	void display();
	void getsize(int n);
};
balancing::balancing()
{
	bal.top = -1;
	bal.size = 0;
	bal.s = NULL;
}
void balancing::getsize(int n)
{
	bal.size = n;
	bal.s = new char[n];
}
void balancing::push(char ele)
{
	if (!IsFull())
	{
		
		bal.s[++bal.top] = ele;
	}
	else cout << "stack is empty" << endl;
}
char balancing::pop(char ch)
{
	char x;
	if (!IsEmpty())
	{
		if ((ch == ')'&&peek() == '(') || (ch == ']'&&peek() == '[') || (ch == '}'&&peek() == '{'))
		{
			 x = bal.s[bal.top--];
	}
	
	}
	else
		cout << "stack is empty" << endl;
	return x;
}
int balancing::peek()
{
	int x = -999;
	if (!IsEmpty())
	{
		x = bal.s[bal.top];
		cout << "top element:" << x << endl;
	}
	else
		cout << "stack is empty" << endl;

	return x;
}
bool balancing::IsFull()
{
	return(bal.top == (bal.size - 1));
}
bool balancing::IsEmpty()
{
	return(bal.top == -1);
}
void balancing::calculate()
{
	char cch[10];
	cin >> cch;
	char ch;
	for (int i = 0; i < strlen(cch); i++)
	{
		switch (cch[i])
		{
		case '(':
			push(cch[i]);
			break;
		case '[':
			push(cch[i]);
			break;
		case '{':
			push(cch[i]);
			break;
		case ')':
			pop(cch[i]);
			break;
		case ']':
			pop(cch[i]);
			break;
		case '}':
			pop(cch[i]);
			break;
		default:
		{
			break;
		}
		}

	}
}

void balancing::display()
{
	for (int i = 0; i <=bal.top; i++)
	{
		cout << bal.s[i];
	}
	if (bal.top == -1)
		cout << "balanced" << endl;
	else
		cout << "unbalanced" << endl;
}
int main()
{
	balancing bt;
	bt.getsize(20);
	bt.calculate();
	bt.display();
	system("pause");
	return 0;
}