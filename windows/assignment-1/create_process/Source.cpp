#include<Windows.h>
#include<iostream>
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
	
	
	if (x == true)
	{
		printf("process1 cretaed\n");
	}
	else
	{
		printf("\nnot cretated1 %d", GetLastError());
	}
	
	system("pause");
	return 0;
}