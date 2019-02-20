
#include<stdio.h>
void match(FILE *fp)
{
	int i;
	
	char s[20];
	char ch;
	FILE *fp2;
	fopen_s(&fp2, "ans.txt", "w");
	printf("enter the word:\n");
	scanf_s("%[^\n]", s);
	while(!feof(fp))
	{
		ch = fgetc(fp);
		while (ch = (fgetc(fp)) != '\t')
		{
		
			if (ch == s)
				fputc(ch, fp2);
			else
				ch = fgetc(fp);
		}
		
		
	}
	return 0;
	
}
	