// Dhruvish_1911261.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
using namespace std;
int n;


struct emp 
{
	int id;
	char name[100];
	int wage;
	int hours;
}; emp e[100];

void menu()
{
	system("cls");
	cout << "\t\t\t\t Employee Application\n";
	cout << "\t\t\t\t -------------------------\n\n";
	cout << "\n\n";
	cout << "\t\t 1) Create an employee list\n";
	cout << "\t\t 2) Display list of employees\n";;
	cout << "\t\t 3) Search employee using Employee ID\n";
	cout << "\t\t 4) Sort Employees\n";
	cout << "\t\t 5) Display max hourly wage\n";
	cout << "\t\t 6) exit\n";
}

void add()
{
	int bcpk[100];
	int j = 0;
	cout << "\t\t\t\t Create an employee list\n\n";
	cout << "enter the numbers of employee(Max. 100): \n";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		a2:cout << "ID:";
		cin >> e[i].id;
		cout << endl;

		
		for (int j = 0; j < i; j++)
		{
			if (bcpk[j] == e[i].id)
			{
				cout << "\t\tid already exist\n \t\tplease enter id again\n";
				goto a2;
			}
		}
			
		

		
		cin.ignore();
		cout << "name:";
		cin >> e[i].name;
		cout << endl;

		cin.ignore();
		
		cout << "hourly wage:";
		cin >> e[i].wage;
		cout << endl;
		cout << "worked hours:";
		cin >> e[i].hours;
		cout << endl;


		bcpk[j] = e[i].id;
		
		j++;
	}
}

void display()
{
	
	if (n != 0)
	{

		system("cls");
		cout << "\t\t\t\t List of Employees\n";
		cout << "\t\t\t\t -----------------------\n\n";
		cout << "ID\t\tName\t\tHourly wage\t\tworked hours\n\n";
		for (int i = 0; i < n; i++)
		{
			cout << e[i].id << "\t\t" << e[i].name << "\t\t" << e[i].wage << "\t\t" << e[i].hours << endl;
		}
	}
	else
	{
		cout << "list is empty.!\n\n";
	}
}
     

void search()
{
	
	int id2;
	char c;
	bool check = false;
	cout << "\t\t\t\t Search employees here\n\n";

	do 
	{
		bool check = false;
		cout << "enter the employee id to search:";
		cin >> id2;
		cout << endl;

		for (int i = 0; i < n; i++)
		{
			if (e[i].id == id2)
			{
				check = true;
				cout << "employee id found\n\n";
				cout << "name is:" << e[i].name << endl;
				cout << "hourly wage is:" << e[i].wage << endl;
				cout << "worked hours:" << e[i].hours << endl;
			}
			
		}
		if (check == false)
		{
			cout << "\t\tID not found.!\n";
		
		}

		
	    cout << "do you want to search again? :";
		cin >> c;
	} while (c == 'y' || c == 'Y');
	
}

void sort()
{
	emp temp;
	
	cout << "\t\t\t\t Sorted list\n\n";

	for (int j = 0; j < n; j++)
	{
		for (int i = 0; i < n - 1; i++)
		{
			if (e[i].id > e[i + 1].id)
			{
				temp = e[i];
				e[i] = e[i + 1];
				e[i + 1] = temp;
			}
		}
	}

		for (int i = 0; i < n; i++)
		{

			cout << "id id:" << e[i].id << endl;
			cout << "name is:" << e[i].name << endl;
			cout << "hourly wage is:" << e[i].wage << endl;
			cout << "worked hours:" << e[i].hours << endl;
			cout << "\n\n";
		}
	}


void d_max()
{
	int temp2;
	cout << "\t\t\t\t Maximum hourly wage\n\n";

	


	for (int i = 0; i < n; i++)
	{
		e[i].wage = e[i + 1].wage;
		temp2 = e[i].wage;
		e[i + 1].wage = temp2;
		
		if (e[i].wage > e[i + 1].wage)
		{
			e[i + 1].wage = e[i].wage;
		}
		
	}
	
	cout << "\t\t maximum wage is: " << e[temp2].wage << endl;
}

void for_exit()
{
	exit(1);
}

int main()
{
	emp e[100];
	int a;
	
	do 
	{
		a1:menu();
		cout << endl;
		cout << "enter the number you want to continue with:";
		cin >> a;
		cout << endl;

		switch (a)
		{
		case 1:
		{
			system("cls");
			add();
			cout << "press any key to continue..";
			cin.ignore();
			getchar();
			goto a1;
		}

		case 2:
		{
			system("cls");
			display();
			cout << "press any key to continue..";
			cin.ignore();
			getchar();
			goto a1;

		}

		case 3:
		{
			system("cls");
			search();
			cout << "press any key to continue..";
			cin.ignore();
			getchar();
			goto a1;

		}
		case 4:
		{
			system("cls");
			sort();
			cout << "press any key to continue..";
			cin.ignore();
			getchar();
			goto a1;

		}
		case 5:
		{
			system("cls");
			d_max();
			cout << "press any key to continue..";
			cin.ignore();
			getchar();
			goto a1;

		}
		case 6:
		{
			for_exit();
		}

		default:
			system("cls");
			cout << "you entered wrong number \n please re-enter\n";
			cout << "press any key to continue..";
			cin.ignore();
			getchar();
		}



	} while (a != 7);

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
