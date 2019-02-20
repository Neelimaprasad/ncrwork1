#include<stdio.h>
#include<string.h>
void remove_comments(FILE *fp)
{
	char ch;
	FILE *fp2;
	fopen_s(&fp2, "ans.txt", "w");
	 while (!feof(fp))
	 {
		 ch = fgetc(fp);
		 if (ch == "/")
		 {
			 ch = fgetc(fp);
			 if (ch == "/")
			 {
				 while (ch = (fgetc(fp)) != '\n')
				 {
				 }
			 }
		 }
		 if (ch != EOF)
			 fputc(ch, fp2);
	 }
		return 0;
}