#include &lt;stdio.h&gt;
int main()
{
	int i, j, m, n, c1, c2, k, rows;
	scanf(&quot; %d&quot; , &amp; rows);
	for (i = 1; i&lt; = rows; i++)
	{
		c1 = k = 0;
		for (j = 1; j&lt; = rows - i; j++)
		{
			printf(&quot; &quot;);
			c1++;
		}
		m = c1;
		while (k != 2 * i - 1)
		{
			if (c1&lt; = rows - 1)
			{
				printf(&quot; %d &quot; , m);
				m--;
				c1++;
			}
		}
		k++;
		return 0;
	}
	return 0;
}