#include<iostream>
using namespace std;
class points
{
public:
	int a, b;
	void getdata()
	{
		cout << "enter coordinates:" << endl;
		cin >> a >> b;
	}
	friend float distance(points p1, points p2);
};
inline int sqr(int a)
{
	return (a*a);
}
float distance(points p1, points p2)
{
		float res = sqrt(sqr(p1.a - p2.a) + sqr(p1.b - p2.b));
		return res;
	
}
int main()
{
	points a, b;
	a.getdata();
	b.getdata();
	cout<<"result:"<<distance(a, b);
	getchar();
	return 0;
}
