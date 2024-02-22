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

	
	     CustomThread<void(*)()> threader2(ExampleFunction2);
	     threader2.StartSingleThread();

		CustomThread<void(*)()> threader(ExampleFunction);
		threader.StartMultipleThreads();

		//threader.Begin(pThread, INFINITE, WaitTypes::SINGLE);
		//threader.End(pThread);

		bool sexyBreakpoint = true;
	


	//CustomThread<void(*)()> threader2(ExampleFunction2);


	//HANDLE pThread2 = threader2.StartCustomThread();



	

	//threader2.Begin(pThread2, INFINITE, WaitTypes::SINGLE);



	//threader2.End(pThread2);



	return 0;
}