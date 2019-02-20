
#include<stdio.h>
#include<string.h>
void replace_tabs(FILE *fp)
{
	FILE *fp2;
	fopen_s(&fp2, "ans.txt", "w");
	char ch;
	while (!feof(fp))
	{
		ch = fgetc(fp);
		if (ch == '/t')
		{
			fputc('//', fp2);
			fputc('t', fp2);
			continue;
		}
		if (ch != EOF)
			fputc(ch, fp2);
	}
	
}