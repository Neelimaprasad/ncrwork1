#include<stdio.h>
int main()
{
	int a[100], i, j, n;
	printf("enter length of array:\n");
	scanf_s("%d", &n);
	printf("enter array:\n");
	for (i = 0; i < n; i++)
		scanf_s("%d", &a[i]);
	for (i = 0; i < (n - 1); i++)
	{
		for (j = 1; j < n; j++)
		{
			if ((a[i] > 0) && (a[j] > 0) || ((a[i] < 0) && (a[j] > 0)))
				j++;
			else if ((a[i] > 0) && (a[j] < 0))
			{
				int temp = a[j];
				a[j] = a[i];
				a[i] = temp;
				i++;
				j++;
			}
		}
	}
	printf("sorted array:%d", a[i]);
	scanf_s("%d", &n);
	return 0;
}