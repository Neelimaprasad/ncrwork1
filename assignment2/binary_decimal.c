#include<stdio.h>
#include<math.h>
int main()
{
	int n, rem, sum = 0, base = 0;
	printf("enter binary num:\n");
	scanf_s("%d", &n);
	while (n > 0)
	{
		rem = n % 10;
		sum = sum + (rem*(int)pow(2, base));
		base++;
	}
	printf("res:%d", sum);
	scanf_s("%d", &n);
	return 0;
}
