#include<stdio.h>
#include<math.h>
int main()
{
	int n,sum=0, rem,count=0;
	printf("enter a number:\n");
	scanf_s("%d", &n);
		while (n > 0)
	{
		rem = n % 10;
		sum = (sum * 10) + rem;
		n= n / 10;

	}
	printf("reverse of a number:%d", sum);
	scanf_s("%d", &n);
	return 0;
}