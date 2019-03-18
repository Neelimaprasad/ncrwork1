#include<iostream>
using namespace std;
class matrix
{
public:
	int a[3][3], b[3][1], c[3][1];
	int i, j;
	void getdata()
	{
		cout << "enter 3x3 matrix:" << endl;
		for (i = 0; i < 3; i++)
		{
			for (j = 0; j < 3; j++)
			{
				cin >> a[i][j];
			}
		}
		cout << "enter 3x1 matrix:" << endl;
			for (i = 0; i < 3; i++)
			{
				for (j = 0; j < 1; j++)
				{
					cin >> b[i][j];
				}
			}
		
	}
	friend int multiplication(matrix &m1);
};
int multiplication(matrix &m1)
{
	//int a[3][3], b[1][3], c[1][3];
	int i, j, k,sum;
		for (i = 0; i < 3; i++)
		{
			for (j = 0; j < 3; j++)
			{
				sum = 0;
				for (k = 0; k < 3; k++)
				{
				
					sum = sum + m1.a[i][k] *m1.b[k][j];
				}
				m1.c[i][j] = sum;
			}
		}
		for (i = 0; i < 3; i++)
		{
			for (j = 0; j < 1; j++)
			{
				cout << m1.c[i][j];
			}
		}
		return 0;
}
int main()
{
	matrix m1;
	m1.getdata();
	multiplication(m1);
	system("pause");
	return 0;

}