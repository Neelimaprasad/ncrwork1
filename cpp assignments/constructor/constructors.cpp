#include<iostream>
using namespace std;
class employee
{

public:
	int a, b;
	employee()
	{
		a = b = 0;
	}
	employee(int a1, int b1)
	{
		a = a1;
		b = b1;
	}
	employee(employee &e)
	{
		employee temp;
		temp.a = e.a;
		temp.b = e.b;

}


	~employee()
	{
		cout << "im in des-1" << endl;
	}



};

int main()
{

	employee e(2,3),e1(e);
	
	cout<<"size of class:"<<sizeof(e)<<endl;
	system ("pause");

}