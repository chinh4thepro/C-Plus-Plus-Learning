#include <iostream>
#include <limits>
#include <string>
#include <math.h>

int main() {
	// Initalize variables
	double input1, input2, input3, output;
	char operation;

	// Get inputs (numbers) and if it is invalid or too high reject them and request again
	do {
		std::cout << "Please enter Red value:" << std::endl;
		std::cin >> input1;
		if (std::cin.fail()) {
			std::cout << "Invalid input. Please enter a number.\n" << std::endl;
			std::cin.clear();
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
			continue;
		}

		if (input1 >= 255) {
			std::cout << "Invalid color value. Please enter a valid color value.\n" << std::endl;
			std::cin.clear();
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
			continue;
		}
	}
	while(input1 >= 255);

	do {
		std::cout << "\nPlease enter Green value:" << std::endl;
		std::cin >> input2;
		if (std::cin.fail()) {
			std::cout << "Invalid input. Please enter a number.\n" << std::endl;
			std::cin.clear();
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
			continue;
		}
		
		if (input2 >= 255) {
			std::cout << "Invalid color value. Please enter a valid color value.\n" << std::endl;
			std::cin.clear();
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
			continue;
		}
	}
	while(input2 >= 255);

	do {
		std::cout << "\nPlease enter Blue value:" << std::endl;
		std::cin >> input3;
		if (std::cin.fail()) {
			std::cout << "Invalid input. Please enter a number.\n" << std::endl;
			std::cin.clear();
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
			continue;
		}

		if (input3 >= 255) {
			std::cout << "Invalid color value. Please enter a valid color value.\n" << std::endl;
			std::cin.clear();
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
			continue;
		}
	}
	while(input3 >= 255);

	// Do math
	output = (0.299 * input1) + (0.587 * input2) + (0.114 * input3);

	std::cout << "\n" << output << std::endl;

	// Report as successful
	return 0;
}
