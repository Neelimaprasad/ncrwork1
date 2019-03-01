#include<iostream>
#include<windows.h>
using namespace std;
int main()
{
	char *s = "neelima";
	WCHAR *t = L"prasad";
	char *multibyte = NULL;
	WCHAR *widechar = NULL;
	int n = strlen(s);
	int m = wcslen(t);
	int b = IsTextUnicode(s, sizeof(char)*n, NULL);
	if (b == 1)
	{
		cout << "s is unicode" << endl;

	}
	else
	{
		cout << "s is not unicode" << endl;
	}
	int b1 = IsTextUnicode(t, sizeof(WCHAR)*m, NULL);
	if (b1 == 1)
	{
		cout << "t is unicode" << endl;

	}
	else
	{
		cout << "t is not unicode" << endl;
	}
	int x = MultiByteToWideChar(CP_UTF8, 0, s, -1, widechar, 0);
	widechar = new WCHAR[x];
	int x1 = MultiByteToWideChar(CP_UTF8, 0, s, -1, widechar, x);

	if (x1 == 0)
	{
		cout << "cannot be converted .error(%d)", GetLastError();
	}
	else
	{
		cout << "can be converted %s\n" << widechar;
	}
	int y = WideCharToMultiByte(CP_UTF8, 0, t, -1, multibyte, 0, NULL, NULL);
	multibyte = new char[y];
	int y1 = WideCharToMultiByte(CP_UTF8, 0, t, -1, multibyte, y, NULL, NULL);

	if (y1 == 0)
	{
		cout << "cannot be converted .error(%d)", GetLastError();
	}
	else
	{
		cout << "can be converted %s\n" << multibyte;
	}
	system("pause");
	return 0;
}
