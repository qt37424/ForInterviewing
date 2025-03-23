// StaticProperty.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "StaticB.h"
using namespace std;

int StaticA::staticcnt = 0;

int main()
{
	StaticA obj1, obj2, obj3;
	StaticB st1, st2;
	cout << "Total objects: " << StaticA::staticcnt << endl; //  output: 5
	cout << "Total objects 1: " << obj1.staticcnt << endl; // output: 5
	// => according to number variable is define with StaticA and StaticB

	// Call directly
	StaticA::showMessage();
	// StaticA::showMessage1();

	// Call through by obj1
	obj1.showMessage();
	obj1.showMessage1();
}