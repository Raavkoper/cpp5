#include "Bureaucrat.hpp"

int main() {
	std::cout << "Creating the objects and setting their grades" << std::endl;
	std::cout << std::endl;

	try {
		Bureaucrat man1("Jonathan", 154);
	} catch (std::exception &e) {
		std::cerr << e.what() << std::endl;
	}
	try {
		Bureaucrat man2("Tessa", 104);
	} catch (std::exception &e) {
		std::cerr << e.what() << std::endl;
	}	
	try {
		Bureaucrat man3("Martin", 140);
	} catch (std::exception &e) {
		std::cerr << e.what() << std::endl;
	}	
	try {
		Bureaucrat man4("Chris", -10);
	} catch (std::exception &e) {
		std::cerr << e.what() << std::endl;
	}

	Bureaucrat man2("Tessa", 104);
	Bureaucrat man3("Martin", 140);

	std::cout << std::endl;
	std::cout << "Printing out their grades" << std::endl;
	std::cout << std::endl;

	std::cout << man2 << std::endl;
	std::cout << man3 << std::endl;

	std::cout << std::endl;
	std::cout << "Decrementing Martin his value ten times" << std::endl;
	std::cout << std::endl;

	for (int i = 0; i < 10; i++) {
		man3--;
	}

	std::cout << man3 << std::endl;

	std::cout << std::endl;
	std::cout << "Trying to decrement Martin his value one more time" << std::endl;
	std::cout << std::endl;

	try {
		man3--;
	} catch (std::exception &e) {
		std::cerr << e.what() << std::endl;
	}
}