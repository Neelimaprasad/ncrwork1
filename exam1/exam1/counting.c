#include<stdio.h>
void count(FILE *fp)
{
	char ch;
		int i, digit_count = 0, alpha_count = 0, space_count = 0, spl_count = 0;

		while (!feof(fp))
		{
			ch = fgetc(fp);
			
				if (isdigit(ch))
					digit_count++;
				else if (isalpha(ch))
					alpha_count++;
				else if (ch == " ")
					space_count++;
				else
					spl_count++;
			}
			printf("digits:%d\nalphabet count:%d\nspace count:%d\nspecial characters:%d\n", digit_count, alpha_count, space_count, spl_count);
			getch();
			
	}