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
		cout << "Enter the Operator ( +, -, *, / ) : ";
		cin >> op;
		cout << "Enter first number: ";
		cin >> num2;
		
		if (op=='+') sum=num1+num2;
		if (op=='-') sum=num1-num2;
		if (op=='*') sum=num1*num2;
		if (op=='/') sum=num1/num2;
		
		cout << sum; 
}
	while (op!='e');
	return 0;
}
