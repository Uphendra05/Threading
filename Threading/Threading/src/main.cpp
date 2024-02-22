#include <iostream>
#include <Windows.h>
#include "MyThread.h"
#include <vector>

void ExampleFunction()
{
	CriticalSection::EnterCS();
	std::cout << "Thread running..." << std::endl;
	CriticalSection::LeaveCS();
}

void ExampleFunction2()
{
	CriticalSection::EnterCS();
	std::cout << "I love hello World" << std::endl;
	CriticalSection::LeaveCS();
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
		singleThread.StartSingleThread();
		

		CustomThread<void(*)()> multipleThreads(ExampleFunction);
		multipleThreads.StartMultipleThreads();

		



	return 0;
}