// COMP375HW1-3.cpp : This file contains the 'main' function. Program execution begins and ends there.
// This program copiews bits 11 though 15 of an integer and places them into another integer

#include <iostream>

using namespace std;

int main()
{
	int stuff, good;
	cout << "Enter a number greater than 2048>";
	cin >> stuff;
	_asm {
		mov eax, stuff	// moves stuff into the eax register
		shr eax, 11		// shifts 11 bits to the right
		and eax, 31
		mov good, eax
	}
	cout << "bits 11 - 15 are " << good << endl;

}