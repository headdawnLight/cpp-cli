// Calculator Programming with CPP
// calculator.cpp
#include <iostream>
using namespace std;

int main()
{
	double num1, num2, sum;
	char op;
	do {
		cout << "\nEnter first number: ";
		cin >> num1;
		cout << "Enter the operator (+) (-) (*) (/) : ";
		cin >> op;
		cout << "Enter second number: ";
		cin >> num2;
		
		if (op=='+') sum=num1+num2;
		if (op=='-') sum=num1-num2;
		if (op=='*') sum=num1*num2;
		if (op=='/') sum=num1/num2;
		
		cout << "Calculation result: " << sum << endl; 
}
	while (op!='e');
	return 0;
}
