// MainApp.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

extern "C" void DisplayMessage(int msg);
extern int sharedVar;

int main()
{
    DisplayMessage(sharedVar);
}