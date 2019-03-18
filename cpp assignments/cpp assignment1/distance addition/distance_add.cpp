#include<iostream>
#include<math.h>
using namespace std;
class distance2;
class distance1
{
public:
	float d1;
	float d2;
	void getdata(float d1,float d2)
	{
		cin >> d1 >> d2;
	}
	void putdata()
	{
		cout << "in meters:" << d1 << endl;
		cout << "in cm:" << d2 << endl;
	}
     friend  void addition1(distance1 &d1, distance2 &d3);
	friend void addition2(distance1 &d2, distance2 &d4);

};
class distance2
{
public:
float d3,d4;
	void getdata(float d3,float d4)
	{
		cin >> d3 >> d4;
	}
	void putdata()
	{
		cout << "in inches:" << d3 << endl;
		cout << "in foot:" << d4 << endl;
	}
	friend void addition1(distance1 &d1, distance2 &d3);
	friend void addition2(distance1 &d2, distance2 &d4);

};
int main()
{
	distance1 a;
	distance2 b;
	a.getdata(0.3048, 1.0);
	a.putdata();
	b.getdata(2.54, 1.0);
	b.putdata();
	//addition1(0.3048f,1.0f);
	//addition2(2.54, 1.0);
	addition1(a, b);
	addition2(a, b);
	getchar();
	return 0;
}
void addition1(distance1 &d1, distance2 &d3)
{
	float sum1;
	sum1 = d1 + (0.3048 * (d3));
	cout << "result1:" << sum1 << endl;

}
void addition2(distance1 &d2, distance2 &d4)
{
	float sum2;
	sum2 =d2 + (2.54*(d4));
	cout << "result1:" << sum2<< endl;
}