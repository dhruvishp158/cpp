// Midterm_exam_Dhruvish.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
using namespace std;
int main()
{
	float product[20],n,total=0,TP,TF;
	static float tp = 0.08;
	static float tf = 0.07;
	int i;

	cout << "\t WELCOME AT IGA \n";
	cout << "\t-------------------\n";
	cout << "\t enter the number of product(max. 20): ";
	cin >> n;
	for (i = 0; i < n; i++)
	{
		cout << "\t enter the price of product " << i + 1<<":";
		cin >> product[i];
		total = total + product[i];
	}
	cout << "\t Here is your bill: \n";
	cout << "\n\n";
	for (i = 0; i < n; i++)
	{
		cout << "product N " << i + 1 << ": " << "price:" << product[i]<<endl;

	}
	cout << " -------------------------\n";
	TP = total * tp;
	TF = total * tf;
	total = total + TP + TF;
	cout << " TP:" << TP<<endl;
	cout << " TF:" << TF<< endl;
	cout << " --------------------------\n";
	cout << " total:" << total;



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
