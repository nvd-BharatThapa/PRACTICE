#include <iostream>

bool isEven(int num)
{
	return (num % 2 == 0);
}

int getInput()
{
	std::cout << "Enter number: ";
	int num{};
	std::cin >> num;

	return num;
}

void printTF(int num)
{
	if (isEven(num))
		std::cout << num << " is an Even number.";
	else
		std::cout << num << " is not an Even number.";
}

int main()
{
	int num{ getInput() };
	printTF(num);	
}