#ifdef _WIN32
#include <Windows.h>
#include <synchapi.h>
#else
#include <unistd.h>
#endif
#include <iostream>
#include <cstdlib>

using namespace std;

int addition()
{
	int x, y, z;
	cout << "Welcome to the Addition Calculator" << endl; Sleep(2000);
	cout << "First number: ";
	cin >> x;
	cout << "\nSecond number: ";
	cin >> y;
	z = x + y;
	cout << "Result: " << z << endl;
	Sleep(4000);
	return z;

}
int subtraction()
{	
	int x, y;
	cout << "Welcome to the Subtraction Calculator" << endl; Sleep(2000);
	cout << "First number: ";
	cin >> x;
	cout << "\nSecond number: ";
	cin >> y;
	int z = x - y;
	cout << "Result: " << z << endl;
	Sleep(4000);
	return z;

}
double multiplication()
{
	int x, y;
	cout << "Welcome to the Multiplication Calculator" << endl; Sleep(2000);
	cout << "First number: ";
	cin >> x;
	cout << "\nSecond number: ";
	cin >> y;
	double z = x * y;
	cout << "Result: " << z << endl;
	Sleep(4000);
	return z;

}
double division()
{
	double x, y;
	cout << "Welcome to the Division Calculator" << endl; Sleep(2000);
	cout << "First number: ";
	cin >> x;
	cout << "\nSecond number: ";
	cin >> y;
	double z = x / y;
	cout << "Result: " << z << endl;
	Sleep(4000);
	return z;

}


int main() 
{
	cout << "Simple Calculator\n" << endl; Sleep(1000);
	cout << "Choose your calculator: \n";
	int input;
	cout << "\n1 for addition" << endl; Sleep(200);
	cout << "2 for subtraction" << endl; Sleep(200);
	cout << "3 for multiplication" << endl; Sleep(200);
	cout << "4 for division" << endl;
	cout << "Input: ";
	cin >> input;

	if (input == 1)
	{
		addition();
	}

	else if (input == 2)
	{
		subtraction();
	}

	else if (input == 3)
	{
		multiplication();
	}

	else if (input == 4)
	{
		division();
	}

	else if (input == 69 || input == 420)
	{
		cout << "bruh" << endl;
		Sleep(500);
		return 1;
	}
	else if (input < 0 || input > 4 )
	{
		cout << "Number must be 1 to 4" << endl;
		Sleep(2000);
		return 1;
	}

	else
	{
		cout << "Must be a number of 1 to 4" << endl;
		Sleep(2000);
		return 1;
	}
}
