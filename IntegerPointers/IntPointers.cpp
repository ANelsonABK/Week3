#include <iostream>

void GetUserNumber(int &num);

int main()
{

	// Ask user to enter integers
	int a, b;

	std::cout << "Welcome! Please enter two numbers." << std::endl;

	std::cout << "Number 1: " << std::endl;
	GetUserNumber(a);

	std::cout << "Number 2: " << std::endl;
	GetUserNumber(b);

	// Assign entered integers to pointers
	int* ptrA = &a;
	int* ptrB = &b;

	// display the values
	std::cout << "You entered " << (* ptrA) << " and " << (*ptrB)
		<< " as your two numbers." << std::endl;
}

void GetUserNumber(int &num)
{
	while (!(std::cin >> num) || std::cin.get() != '\n') {
		std::cout << "Error. Number must be an integer. Try again: " << std::endl;
		std::cin.clear();
		std::cin.ignore(256, '\n');
	}
}