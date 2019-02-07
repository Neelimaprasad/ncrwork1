#include<stdio.h>
#include<math.h>
int main()
{
	int n,num, rem,rem1, sum = 0, base = 0,i=0,a[20],j;
	printf("enter binary num:\n");
	scanf_s("%d", &n);
	while (n > 0)
	{
		rem = n % 10;
		sum = sum + (rem*(int)pow(2, base));
		n = n / 10;
		base++;
	}
	printf("resultant decimal number:%d", sum);
	printf("enter decimal number:\n");
	scanf_s("%d", &num);
	while (num > 0)
	{
		
		
			rem1 = num % 2;
			a[i] = rem1;
			num = num / 2;
			i++;
		
	}
	for(j=i-1;j>=0;j--)
	printf("%d",a[j]);
	scanf_s("%d", &num);

	return 0;
}