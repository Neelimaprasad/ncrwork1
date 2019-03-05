#include<iostream>
using namespace std;
#include<windows.h>
#include<tchar.h>
#include<shellapi.h>
#define buffersize 100
int _tmain(int argc, LPSTR argv[])
{
	HANDLE hfile;
	char buffer[buffersize];
	hfile = CreateFile(L"sample.txt",
		GENERIC_READ,
		0,
		NULL,
		OPEN_EXISTING,
		FILE_ATTRIBUTE_NORMAL,
		NULL);
	if (INVALID_HANDLE_VALUE == hfile)
	{
		_tprintf(_T("file doesnot exist error(%d)\n"), GetLastError());
		getchar();
		return FALSE;
	}
	_tprintf(_T("file (%ws) opened successfully\n"), argv[1]);
	DWORD dwNbr;
	ZeroMemory(buffer, buffersize);
	bool ret = ReadFile(hfile, buffer, buffersize, &dwNbr, NULL);
	if (ret == 0)
	{
		_tprintf(_T("can't read file"));
		getchar();
		return FALSE;
	}
	CloseHandle(hfile);
	_tprintf(_T("contents of file(%s)%s\n"), argv[1], buffer);
	getchar();
	return 0;
}