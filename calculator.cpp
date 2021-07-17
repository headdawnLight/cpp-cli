// Calculator programming with C++ on MS Visual Studio 2019
// calculator.cpp
#include <iostream>
using namespace std;

int main()
{
	// A simple calculation requires two operands and an operation

	char op;
	double num1, num2;

	cout << "\nEnter the first number: ";
	cin >> num1;
	cout << "Enter the operator (+) (-) (*) (/) : ";
	cin >> op;
	cout << "Enter the second number: ";
	cin >> num2;

	// Addition, subtraction, multiplication and division operations

	switch (op) {

		case '+':
		cout << "\nThe result of addition: "
			<< num1 << '+' << num2 << '=' << (num1 + num2) << endl;
		break;

		case '-':
		cout << "\nThe result of subtraction: "
			<< num1 << '-' << num2 << '=' << (num1 - num2) << endl;
		break;

		case '*':
		cout << "\nThe result of multiplication: "
			<< num1 << '*' << num2 << '=' << (num1 * num2) << endl;
		break;

		case '/':

		if (num2 != 0.0)
			cout << "\nThe result of division: "
			<< num1 << '/' << num2 << '=' << (num1 / num2) << endl;
		else
			cout << "\nAn invalid operation" << endl;
		break;

		default:
		cout << op << " is an invalid operator" << endl;
	}

	// prompt to perform another calculation
	cout << "\nPress 'C' key to perform another calculation or press 'E' key to exit: " << flush;
	char redo;
	cin >> redo;
	switch (redo) {

		case 'C': case 'c':
		main();
		break;

		case 'E': case 'e':
		cout << "\nDeveloped by headdawnLight" << endl;
		break;
	}
	return 0;
}