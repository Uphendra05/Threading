#include <iostream>
#include <Windows.h>
#include "MyThread.h"
#include <vector>

void ExampleFunction()
{
	std::cout << "Thread running..." << std::endl;
}

void ExampleFunction2()
{
	std::cout << "I love hello World" << std::endl;
}



int main(int args, char* argc[])
{

	//     HANDLE CreateThread(
	//     	[in, optional]  LPSECURITY_ATTRIBUTES   lpThreadAttributes,
	//     	[in]            SIZE_T                  dwStackSize,
	//     	[in]            LPTHREAD_START_ROUTINE  lpStartAddress,
	//     	[in, optional]  __drv_aliasesMem LPVOID lpParameter,
	//     	[in]            DWORD                   dwCreationFlags,
	//     	[out, optional] LPDWORD                 lpThreadId
	//     );

	
	
	
	    CustomThread<void(*)()> singleThread(ExampleFunction2);
		HANDLE single = singleThread.StartSingleThread();
		

		CustomThread<void(*)()> multipleThreads(ExampleFunction);
		multipleThreads.StartMultipleThreads();

		



	return 0;
}