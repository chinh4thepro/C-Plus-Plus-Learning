#include <iostream>

int main() {
	// Initalize variables
	double input1, input2, output;
	char operation;

	// Get inputs (numbers) and if it is invalid reject them and request again
	do {
		std::cout << "Please enter number 1:" << std::endl;
		std::cin >> input1;
		if (std::cin.fail()) {
			std::cout << "Invalid input. Please enter a number.\n" << std::endl;
			std::cin.clear();
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
			continue;
		}

		break;
	}
	while(true);
	do {
		std::cout << "\nPlease enter number 2:" << std::endl;
		std::cin >> input2;
		if (std::cin.fail()) {
			std::cout << "Invalid input. Please enter a number.\n" << std::endl;
			std::cin.clear();
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
			continue;
		}

		break;
	}
	while(true);

	// Get operator and if it is an invalid operator and ask again
	do {
		std::cout << "\nPlease enter desired operator (e.g. +, -, *, /):" << std::endl;
		std::cin >> operation;
		
		if(!(operation == '-' || operation == '+' || operation == '/' || operation == '*')) {
			std::cout << "Invalid input. Please enter a operator.\n" << std::endl;
			std::cin.clear();
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
			continue;
		}

		break;
	}
	while(!(operation == '-' || operation == '+' || operation == '*' || operation == '/'));
	
	// Do the operations
	switch (operation) {
		case '+':
			output = input1 + input2;
			break;
		case '-':
			output = input1 - input2;
			break;
		case '*':
			output = input1 * input2;
			break;
		case '/':
			if (input2 == 0) {
				std::cout << "Dividing by 0 is not possible" << std::endl;
				return 1;
			} else { 
				output = input1 / input2;
			}
			break;
		default:
			std::cout << "\nHOW DID YOU MANAGE THIS. Invalid operator." << std::endl;
			return 1;
	}

	std::cout << "\n" << output << std::endl;

	// Report as successful
	return 0;
}
