#include<stdio.h>
#include<iostream>
#include<windows.h>
using namespace std;
#include<shellapi.h>
#include<tchar.h>
int main()
{
	LPWSTR *SZargslist;
	int i, nargs;
	SZargslist = CommandLineToArgvW(GetCommandLineW(), &nargs);
	if (SZargslist == NULL)
		wprintf(L"no command line arguments\n");
	else
	{
		for (i = 0; i < nargs; i++)
			wprintf(L"%d-%s\n", i, SZargslist[i]);
	}
	system("pause");
	return 0;
}