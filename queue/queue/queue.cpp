#include<iostream>
using namespace std;
struct queue
{
	int rear ;
	int front ;
	int size ;
	int *q;
};
class queues
{
	struct queue que;
public:
	queues();
	void push(int);
	int pop();
	bool overflow();
	bool underflow();
	void disp();
	~queues();
	void getsize(int);
};
queues::queues()
{
	que.rear=-1;
	que.front=-1;
	que.size=0;
	que.q = NULL;
	
 }
void queues::getsize(int n)
{
	que.size = n;
	que.q = new int[n];
}
bool queues::overflow()
{
	return (que.rear == (que.size - 1));
		
}
bool queues::underflow()
{

	return (que.front==-1);
		
}
void queues::push(int ele)
{
	if (que.front == -1 && que.rear == -1)
	{
		que.front = 0;
		que.rear = 0;
		que.q[que.rear] = ele;
		cout << que.q[que.rear];
	}
	else if (!overflow())
	{
	
		que.q[que.rear] = ele;
		cout << que.q[que.rear++];
	}
	else
	{
		cout << "queue is full" << endl;
	}

}
int queues::pop()
{
	int x = -999;


	//cout << "hfgvxd0";
	if (!underflow())
	{
		
		x = que.q[que.front];
		que.front++;
		cout <<"ele is "<<x;
	}
	else 	if (que.front == que.rear)
	{
		que.front == -1;
		que.rear == -1;
	}
	else
		cout << "queue is empty" << endl;
	
	return x;

}
void queues::disp()
{
	for (int i = que.front; i <= que.rear; i++)
	{
		cout <<"   "<< que.q[i];
	}
}
queues :: ~queues()
{
	delete que.q;
}

int main()
{
	queues q1;
	q1.getsize(20);
	q1.push(1);
	q1.push(2);
	q1.push(3);
	q1.disp();
	q1.pop();
	q1.disp();
	system("pause");
	return 0;



}