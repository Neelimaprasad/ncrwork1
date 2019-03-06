#include<iostream>
using namespace std;
#include<Windows.h>
#include<shellapi.h>
#include<tchar.h>
//creating event
int _tmain()
{
	HANDLE Hfile;
	Hfile= CreateEventA(
		NULL,
	FALSE,
		FALSE,
		TEXT("gunti_event")
	);
	if (INVALID_HANDLE_VALUE ==Hfile)
		cout << "event not created" << endl;
	else
		//CloseHandle(Hfile); 
	
	getchar();

}