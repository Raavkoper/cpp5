#include "Bureaucrat.hpp"
#include "Intern.hpp"

int main() {
	Intern someIntern;

	AForm *form1;
	AForm *form2;
	AForm *form3;

	form1 = someIntern.makeForm("robotomy request", "Bender");
	form2 = someIntern.makeForm("shrubbery creation", "Treehouse");
	form3 = someIntern.makeForm("loplop", "No existo");
}
