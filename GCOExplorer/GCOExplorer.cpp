// GCOExplorer.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <Windows.h>
#include <string.h>

 
using namespace std;

HWND MianWindow = nullptr;


 
int main()
{
	setlocale(LC_ALL, "Russian");
	 
	char buf[512];
	char* bufl[512];
	while (true)
	{
		MianWindow = FindWindowA("CabinetWClass", NULL);
		MianWindow = FindWindowExA(MianWindow, NULL, "WorkerW", "");
		MianWindow = FindWindowExA(MianWindow, NULL, "ReBarWindow32", "");
		MianWindow = FindWindowExA(MianWindow, NULL, "Address Band Root", "");
		MianWindow = FindWindowExA(MianWindow, NULL, "msctls_progress32", "");
		MianWindow = FindWindowExA(MianWindow, NULL, "Breadcrumb Parent", "");
		MianWindow = FindWindowExA(MianWindow, NULL, "ToolbarWindow32", NULL);
		if (!MianWindow)
			continue;

		GetWindowTextA(MianWindow, buf, 512);
		 
		cout << buf << endl;
		Sleep(200);
	}
}

 