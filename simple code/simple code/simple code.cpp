// simple code.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<windows.h>
using namespace std;

int main()
{ 
	int h, m, s, a, err;
	err = a = 0;
	while (err == 0)
	{
		cout << "Enter the time in hours, minutes and seconds: ";

		cin >> h >> m >> s;
		if (h < 24 && m < 60 && s < 60)
		{
			err = 1;
		}
		else
		{
			system("cls");
		}

	}
	while (a == 0)
	{
		system("cls");
		cout << h << ":" << m << ":" << s;
		Sleep(1000);
		s++;
		if (s > 59)
		{
			s = 0;
			m++;
		}
		if (m > 59)
		{
			m = 0;
			h++;
		}
		if (h > 24)
		{
			h = 0;
		}	
		

	}
	return 0;

}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
