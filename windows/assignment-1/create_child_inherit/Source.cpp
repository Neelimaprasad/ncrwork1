#include<iostream>
using namespace std;
#include<Windows.h>
#include<tchar.h>
#include<shellapi.h>
int _tmain(int argc, char *argv[])
{
	STARTUPINFO s;
	PPROCESS_INFORMATION p;
	BOOL x= CreateProcessA(
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
	HANDLE Hfile;
	Hfile = CreateEventA(
		NULL,
		FALSE,
		FALSE,
		TEXT("gunti_event")
	);
	if (INVALID_HANDLE_VALUE == Hfile)
		cout << "event not created" << endl;

}