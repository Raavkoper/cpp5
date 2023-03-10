#include "Bureaucrat.hpp"
#include "Form.hpp"

int main() {
	try {
		Form form1("Form1", 0, 160, -1);
	} catch (std::exception &e) {
		std::cerr << e.what() << std::endl;
	}
	Form form2("Form2", 0, 100, 100);
	Form declaration("Declaration of independence", 0, 55, 60);

	std::cout << std::endl;
	std::cout << "Trying to get someone to sign the Declaration of independence" << std::endl;
	std::cout << std::endl;

	Bureaucrat man1("Billy", 90);
	Bureaucrat man2("Jimson", 25);

	try {
		man1.signForm(declaration);
	} catch (std::exception &e) {
		std::cerr << e.what() << std::endl;
	}
	man2.signForm(declaration);

	std::cout << std::endl;
	std::cout << "Trying to get someone to sign Form2" << std::endl;
	std::cout << std::endl;

	man1.signForm(form2);
	man2.signForm(form2);
}
