// Calculator Programming with CPP
// calculator.cpp
#include <iostream>
using namespace std;
int main()
{
	int num1;
	int num2;
	int sum;
	cout << "Enter first number:\n";
	cin >> num1;
	cout << "Enter second number:\n";
	cin >> num2;
	sum = num1 + num2;
	cout << "The sum of two numbers: " << sum << endl;
	return 0;
}