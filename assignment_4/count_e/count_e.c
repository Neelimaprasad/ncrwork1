#include<stdio.h>
#include<string.h>
int main()
{
	char * s[] = { "we will teach you how to ", "Move a mountain ", "Level a building ", "Erase the past ", "Make a million " };
	int i = 0, j = 0, count = 0;
	int len = strlen(s);
	printf("%d", len);
	for (i = 0; i <5; i++)
	{
		printf("%d", strlen(s[i]));
		for (j = 0; j <(strlen(s[i])); j++)
		{
			if ((s[i][j]) == 'e')
				count++;
		}
	}
	printf("no of e's:%d", count);
	getch();
	return 0;


}