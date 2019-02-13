#include<iostream>0
#include<string.h>
using namespace std;
class student
{
public:
	int m1;
	int m2;
	int m3;
	float avg=0;
	char stud_name[20];
	void set_data(char name[20], int a, int b, int c)
	{
		strcpy_s(stud_name,name);
		m1 = a; 
		m2 = b;
		m3 = c;

	}
void com_avg()
	{
	//cout << "enyering avg\n";
		int sum = m1 + m2 + m3;
		 avg = (sum / 3.0f);
		 cout << "avg is" << avg<<endl;
		// cout << "exiting";
	}
	char com_grade()
	{
		if (avg >= 60)
			return 'A';
		else if ((avg > 50) && (avg < 60))
			return 'B';
		else if ((avg > 40) && (avg < 50))
			return 'C';
		else if ((m1 <= 40) || (m2 <= 40) || (m3 <= 40))
			return 'F';
		else
			return 'm';
	}
	void disp()
	{
		cout << "name of the student:" << stud_name << endl;
		cout << "marks of three subjects:" << m1 << "\t" << m2 << "\t" << m3 << endl;
		cout << "grade:"<<com_grade();
	}

};
int main()
{
	student s1;
	s1.set_data("neelima", 50, 60, 70);
	//s1.com_avg();	
	s1.com_avg();

	s1.disp();
	getchar();
	return 0;

}