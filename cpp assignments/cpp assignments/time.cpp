#include<iostream>
using namespace std;
class time
{
public:
	int hrs, min, sec;
	time()
	{
		hrs = min = sec = 0;
	}
	time(int a, int b, int c)
	{
		hrs = a;
		min = b;
		sec = c;
	}
	void disp()
	{
		cout << hrs << ":" << min << ":" << sec << endl;
	}
	void add(time a, time b)
	{
		sec = a.sec + b.sec;
		min = a.min + b.min + (sec / 60);
		hrs = a.hrs + b.hrs+(min/60);
		sec = sec % 60;
		min = min % 60;
	}
	
};
int main()
{
	time t1(4,20,40), t2(3,20,30), t3;
	t3.add(t1, t2);
	t3.disp();
	getchar();
	return 0;
}