#include "Bureaucrat.hpp"

int main() {
	std::cout << "Creating the objects and setting their values" << std::endl;
	std::cout << std::endl;

	Bureaucrat man1("Jonathan", 53);
	Bureaucrat man2("Tessa", 104);
	Bureaucrat man3("Martin", 150);
	Bureaucrat man4("Chris", -10);

	std::cout << std::endl;
	std::cout << "Printing out their values" << std::endl;
	std::cout << std::endl;


	std::cout << man1 << std::endl;
	std::cout << man2 << std::endl;
	std::cout << man3 << std::endl;
	std::cout << man4 << std::endl;

	std::cout << std::endl;
	std::cout << "Decrementing Chris his value ten times" << std::endl;
	std::cout << std::endl;

	for (int i = 0; i < 10; i++) {
		man4--;
	}

	std::cout << man4 << std::endl;

	std::cout << std::endl;
	std::cout << "Incrementing Chris his value eleven times" << std::endl;
	std::cout << std::endl;

	for (int i = 0; i < 11; i++) {
		man4++;
	}
}