#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
#include<ctype.h>
void count(FILE *fp);
void remove_comments(FILE *fp);
void match(FILE *fp);
void replace_tabs(FILE *fp);
int main()
{
	FILE *fp;
	fopen_s(&fp, "text2.txt", "r");
	int ch;
	printf("1.counting\n2.removing comments\n3.rotate matching word\n4.replace tab with '\t'\n");
	printf("enter choice:\n");
	scanf_s("%d", &ch);
	switch (ch)
	{
	case 1:
			count(fp);
		break;
	case 2:
		remove_comments(fp);
		break;
	case 3:
		match(fp);
		break;
	case 4:
		replace_tabs(fp);
		break;
	}
	fclose(fp);
	getch();
	return 0;
}