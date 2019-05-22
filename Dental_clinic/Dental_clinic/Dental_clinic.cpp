// Dental_clinic.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include<string>
using namespace std;
int main()
{
	string name;
	char ans;
	double subtotal = 0, total=0,tax;
	static double cl_rate = 60, cavity_rate = 200, x_rate = 100, tax_rate = .15;

	cout << "\t DENTAL CLINIC \n";
	cout << "\t ------------------\n";
	cout << "\t enter Patient name: \n";
	cin>>name;
	cout << "\t wa cleaning performed?: \n";
	cin >> ans;
	if (ans == 'y' || ans == 'Y')
	{
		subtotal = subtotal + cl_rate;
		//total = subtotal * tax_rate;

	}

	cout << "\t was cavity prforemed?: \n";
	cin >> ans;
	if (ans == 'y' || ans == 'Y')
	{
		subtotal = subtotal + cavity_rate;
		//total = subtotal * tax_rate;

	}

	cout << "\t was x ray perforemed?: \n";
	cin >> ans;

	if(ans=='y'|| ans=='Y')
	{
		subtotal = subtotal + x_rate;
		//total = subtotal * tax_rate;

	}
	tax = subtotal * tax_rate;
	cout << "\t receipt for " << name << " \n";
	cout << "\t ---------------------------\n";
	cout << "\t subtotal is:" << subtotal<<"\n";
	cout << "\t tax is: " << tax<< "\n";
	cout << "\t -------------------------\n";
	cout << "\t total is: " << subtotal-tax;
	


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
