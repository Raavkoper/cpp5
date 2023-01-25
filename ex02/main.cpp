#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main() {
	ShrubberyCreationForm shrubby("Bamboo");
	Bureaucrat jonna("Jonna", 145), bammi("Bammi", 50), fresku("Fresku", 4);

	// bammi.signAForm(shrubby);
	bammi.signForm(shrubby);
	bammi.executeForm(shrubby);

	// PresidentialPardonForm pressy("Obama");
	// bammi.signForm(pressy);
	// fresku.signForm(pressy);

	// jonna.executeForm(pressy);

	RobotomyRequestForm robby("Terminator");
	try {
		bammi.executeForm(robby);
	} catch (std::exception &e) {
		std::cerr << e.what() << std::endl;
	}
	bammi.signForm(robby);
	std::cout << std::endl;
	bammi.executeForm(robby);
	std::cout << std::endl;

	bammi.executeForm(robby);
	std::cout << std::endl;

	bammi.executeForm(robby);
	std::cout << std::endl;

	std::cout << std::endl;
	bammi.executeForm(robby);
	std::cout << std::endl;

	bammi.executeForm(robby);
}
