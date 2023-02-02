#include "Intern.hpp"

Intern::Intern() {}
 
Intern::Intern( const Intern& other) {}
 
Intern::~Intern() {}

Intern&	Intern::operator=( const Intern& other ) {
	return *this;
}

AForm	*shrubberyCreation(std::string target) {
	ShrubberyCreationForm	*ret = new ShrubberyCreationForm(target);
	return (ret);
}

AForm	*robotomyRequest(std::string target) {
	RobotomyRequestForm	*ret = new RobotomyRequestForm(target);
	return (ret);
}

AForm	*presidentialPardon(std::string target) {
	PresidentialPardonForm	*ret = new PresidentialPardonForm(target);
	return (ret);
}

AForm *Intern::makeForm(std::string form, std::string target) {
	std::string names[] = {"robotomy request", "presidential pardon", "shrubbery creation"};
	AForm *(*forms[])(std::string) =  {shrubberyCreation, robotomyRequest, presidentialPardon};
	for (int i = 0; i < 3; i++) {
		if (form == names[i]) {
			std::cout << "Intern making form " << form << std::endl;
			AForm *form = forms[i](target);
			return (form);
		}
	}
	std::cout << "That ain't no real form" << std::endl;
	return (NULL);
}
