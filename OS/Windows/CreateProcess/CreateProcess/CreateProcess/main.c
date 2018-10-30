#include <stdio.h>
#include <Windows.h>

int main(void)
{
	STARTUPINFO si;
	PROCESS_INFORMATION pi;

	/* Allocate memory */
	ZeroMemory(&si, sizeof(si));
	si.cb = sizeof(si);
	ZeroMemory(&pi, sizeof(pi));

	/* Create child process */
	if (!CreateProcess(NULL, /* use command line */
		"C:\\Windows\\System32\\mspaint.exe", /* command */ 
		NULL, /* don't inherit process handle */
		NULL, /* don't inherit thread handle */
		FALSE, /* disable handle inheritance */
		0, /* no creation flag */
		NULL, /* use parent's environment block */
		NULL, /* use parent's existing directory */
		&si,
		&pi))
	{
		fprintf(stderr, "Create Process Failed1");
		return -1;
	}

	/* Parent will wait for the child to complete */
	WaitForSingleObject(pi.hProcess, INFINITE);
	printf("Child complete\n");

	/* Close handles */
	CloseHandle(pi.hProcess);
	CloseHandle(pi.hThread);
}