#include <iostream>
#include <string>
#include <math.h>

int main() {
	std::string binary;
	unsigned int decimal = 0;

	std::cout << "Enter desired base2 number: " << std::endl;
	std::cin >> binary;
	
	for (int i = binary.size() - 1; i >= 0; i--) {
		char digit = binary[i];
		auto power = (unsigned int)std::pow(2.0, (double)i);
		decimal += (unsigned int)(digit == '1') * power;	
	}

	std::cout << decimal << std::endl;

	return 0;

}
