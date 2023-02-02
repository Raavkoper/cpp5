#ifndef INTERN_H
#define INTERN_H

#include "AForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"

class Intern {
public: 
	Intern(); 
	Intern(const Intern &other); 
	~Intern(); 
	Intern& operator=(const Intern &other);

	AForm *makeForm(std::string form, std::string target);
}; 
 
#endif
