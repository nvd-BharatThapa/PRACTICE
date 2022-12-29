#include <iostream>

double numInput()
{
	std::cout << "Enter a double value : ";
	double num{};
	std::cin >> num;

	return num;
}

int main()
{
	double num1{ numInput() };
	double num2{ numInput() };

	std::cout << "Enter one of the following : +, -, *, or / : ";
	char oper{};
	std::cin >> oper;

	switch (oper)
	{
	case '+':
		std::cout << num1 << ' ' << oper << ' ' << num2 << " is " << num1 + num2;
		break;
	case '-':
		std::cout << num1 << ' ' << oper << ' ' << num2 << " is " << num1 - num2;
		break;
	case '*':
		std::cout << num1 << ' ' << oper << ' ' << num2 << " is " << num1 * num2;
		break;
	case '/':
		std::cout << num1 << ' ' << oper << ' ' << num2 << " is " << num1 / num2;
		break;
	default:
		std::cout << "Opps! Wrong operation...\n Program terminated";
		break;
	}
}