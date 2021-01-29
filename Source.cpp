#include <cstdlib>
#include <ctime>
#include <iostream>


unsigned int random_num() {
	srand(unsigned(time(0)));
	unsigned int random = rand() % 10;
	return random;
}

int main() {

	std::cout << "Welcome to Magic 8-Ball" << "\n"
		<< "Type in your question:" << "\n";

	std::string question = "";
	std::cin >> question;

	unsigned int result = rand() % 10;
	result = random_num();

	switch (result) {
	case 0:
		std::cout << "Definitely" << "\n";
		break;
	case 1:
		std::cout << "Yes" << "\n";
		break;
	case 2:
		std::cout << "Indubitably" << "\n";
		break;
	case 3:
		std::cout << "It is certain" << "\n";
		break;
	case 4:
		std::cout << "Most likely" << "\n";
		break;
	case 5:
		std::cout << "Try again" << "\n";
		break;
	case 6:
		std::cout << "Reply hazy" << "\n";
		break;
	case 7:
		std::cout << "Cannot predict now" << "\n";
		break;
	case 8:
		std::cout << "No" << "\n";
		break;
	case 9:
		std::cout << "Absolutely not" << "\n";
		break;
	}
}