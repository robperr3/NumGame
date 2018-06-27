#include "stdafx.h"
#include <iostream>


using namespace std;
//you have to put these variables here because they are being used in the functions 
int x = 0;
int y = 0;

void add()//defining the function
{
	cout << "choose a number between 0 & 100\n";
	cin >> x;
	cout << "choose a number between 0 & 100\n";
	cin >> y;
	cout << x << "+" << y << "=" << x + y<< endl;
}

void multiply()
{
	cout << x << "*" << y << "=" << x * y << endl;
}

//This is one way to make functions. put data type & variable name as arguments 
//void Delores(string texttoSpeak)
//{
//	cout << texttoSpeak << endl;  then use variable name in fucntoin definition 