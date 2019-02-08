#include<stdio.h>
int fact(int n)
{
	if (n == 0)
		return 1;
	else
		return (n*fact(n-1));
}
int main()
{
	int n,factorial;
	printf("enter number:\n");
	scanf_s("%d", &n);
	factorial = fact(n);
	printf("factorial of number %d : %d", n, factorial);
	getch();
	return 0;
}
	
	