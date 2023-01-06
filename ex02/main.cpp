#include "Bureaucrat.hpp"
#include "AForm.hpp"

int main() {
	AForm form1("Form1", 0, 160, -1);
	AForm form2("Form2", 0, 100, 100);
	AForm declaration("Declaration of independence", 0, 55, 60);

	std::cout << std::endl;
	std::cout << "Trying to get someone to sign the Declaration of independence" << std::endl;
	std::cout << std::endl;

	Bureaucrat man1("Billy", 90);
	Bureaucrat man2("Jimson", 25);

	man1.signAForm(declaration);
	man2.signAForm(declaration);

	std::cout << std::endl;
	std::cout << "Trying to get someone to sign Form2" << std::endl;
	std::cout << std::endl;

	man1.signAForm(form2);
	man2.signAForm(form2);
}
