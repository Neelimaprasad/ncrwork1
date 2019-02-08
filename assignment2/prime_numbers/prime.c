#include<stdio.h>
int main()
{
	int n1, n2, i, flag;
	printf("enter number1:\n");
	scanf_s("%d", &n1);
	printf("enter number2:\n");
	scanf_s("%d", &n2);
	while (n1 <= n2)
	{
		flag = 0;
		for (i = 2; i <= n1 / 2; i++)
		{
			if (n1%i == 0)
			{
				flag = 1;
				break;
			}
		}
		if (flag == 0)
			printf("%d", n1);
		n1++;
	}
	scanf_s("%d", &n2);
		return 0;
}