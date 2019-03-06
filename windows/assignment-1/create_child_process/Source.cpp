#include<iostream>
using namespace std;
#include<windows.h>
int main(int argc, char *argv[])
{
	STARTUPINFOA s;
	PROCESS_INFORMATION p;
	ZeroMemory(&s, sizeof(s));
	BOOL x = CreateProcessA(
		NULL,
		argv[1],
		/*as we are giving command line arguments*/
		NULL,
		NULL,
		false,
		NORMAL_PRIORITY_CLASS,
		NULL,
		NULL,
		&s,
		&p);
	cout << GetCurrentProcessId() << endl;
	cout << GetProcessId(p.hProcess)<<endl;
	cout << GetCurrentThreadId() << endl;
	cout << GetThreadId(p.hThread) << endl;
	cout << GetProcessIdOfThread(p.hThread) << endl;
	getchar();
}