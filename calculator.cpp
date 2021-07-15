// Calculator Programming with C++
// calculator.cpp
#include <iostream>
using namespace std;

int main()
{	
	char op;
	double num1, num2;
	
	cout << "\nEnter the first number: ";
	cin >> num1;
	cout << "Enter the operator (+) (-) (*) (/) : ";
	cin >> op;
	cout << "Enter the second number: ";
	cin >> num2;

	switch (op) {

		case '+':
			cout << "The result of addition: " 
				<< num1 << '+' << num2 << '=' << (num1 + num2);
		break;

		case '-':
			cout << "The result of subtraction: " 
				<< num1 << '-' << num2 << '=' << (num1 - num2);
		break;

		case '*':
		    cout << "The result of multiplication: " 
				<< num1 << '*' << num2 << '=' << (num1 * num2);
		break;

		case '/':

		if (num2 != 0.0)
			cout << "The result of division: " 
				<< num1 << '/' << num2 << '=' << (num1 / num2);
		else 
			cout << "an invalid transaction";
		break;

		default: 
			cout << op << " is an invalid operator";
	}
	return 0;
}