#include<stdio.h>
#include<math.h>
int main()
{
	int n,rem,k=4, i=0,j=0,a[10],b[20];
	printf("enter decimal number:\n");
	scanf_s("%d", &n);
	while (n > 0)
	{
		rem = n % 2;
		a[i] = rem;
		n = n / 2;
		i++;
	}
	if(n>8&&n<=15)
	{
	b[0] = 1;
	while(i>0)

	else if (n > 3 && n < 8)
	{
		b[0] = 1;
		b[2] = 0;
	}
	else
	{
		b[0] = 0;
		b[2] = 0;
		b[4] = 0;
	}
	for (j = 2; j < 10; j=j+2)
	{
		b[j] = k;
		k--;
	}
	
	for (j = 0; j < 10; j++)
		printf("%d", b[j]);
	scanf_s("%d", &n);
	return 0;
}
