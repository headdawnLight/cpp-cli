// Calculator Programming with CPP
// calculator.cpp
#include <iostream>
using namespace std;

int main()
{
	char op;
	double num1,num2;

	cout << "Enter the first number: ";
	cin >> num1;
	cout << "Enter the operator (+) (-) (*) (/) : ";
	cin >> op;
	cout << "Enter the second number: ";
	cin >> num2;

	switch (op) {

		case '+':
			cout << num1 << '+' << num2 << '=' << (num1 + num2);
			break;

		case '-':
			cout << num1 << '-' << num2 << '=' << (num1 - num2);
			break;

		case '*':
			cout << num1 << '*' << num2 << '=' << (num1 * num2);
			break;

		case '/':
			if (num2 != 0.0)
				cout << num1 << '/' << num2 << '=' << (num1 / num2);
			else
				cout << "Divide by zero situation";
			break;

		default:
			cout << op << "is an invalid operator";
}
	return 0;
}
