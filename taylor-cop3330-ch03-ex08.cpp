/*
 *  UCF COP3330 Fall 2021 Assignment 5 Solution
 *  Copyright 2021 Noah Taylor
 */

// Chapter 3 exercise 8

#include <iostream>
using namespace std;

// Main function
int main()
{
	// Variable declaration
	int num;

	// Displays message and recieves user input
	cout << "This program determines whether an inputted integer is even or odd." << endl;
	cout << "==================================================================\n" << endl;
	cout << "Enter an integer: ";
	cin >> num;

	// Checks condition for integer classification, displays result
	if (num % 2 == 0)
		cout << "\nThe value of " << num << " is an even number." << endl;
	else
		cout << "\nThe value of " << num << " is an odd number." << endl;

	system("pause>0");
}