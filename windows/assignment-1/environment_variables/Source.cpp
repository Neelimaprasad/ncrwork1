#include<iostream>
#include<windows.h>
#include<stdio.h>
#include<tchar.h>

using namespace std;
void DumpEnvStrings(PTSTR pEnvBlock[])
{
	int Current = 0;
	PTSTR *pElement = (PTSTR*)pEnvBlock;
	PTSTR pCurrent = NULL;
	while (pElement != NULL)
	{
		pCurrent = (PTSTR)(*pElement);
		if (pCurrent == NULL)
			pElement = NULL;
		else
		{
			_tprintf(TEXT("[%u]%ws\r\n"), Current, pCurrent);
			Current++;
			pElement++;

		}
	}
}
int _tmain(int argc, TCHAR *argv[], TCHAR *env[])
{
	DumpEnvStrings(env);
	TCHAR envVarString0[] = TEXT("%windir%");
	TCHAR buffer[MAX_PATH];
	DWORD ret;
	ret = ExpandEnvironmentStrings(envVarString0, buffer, MAX_PATH);
	if (!ret)
	{
		printf("%d\n", GetLastError());
		getchar();
		return FALSE;
	}
	else
	_tprintf(L"%ws", buffer);
	getchar();
	system("pause");
	return 0;
}



