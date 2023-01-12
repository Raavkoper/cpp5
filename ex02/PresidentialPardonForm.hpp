#ifndef PRESIDENTIALPARDONFORM_H
#define PRESIDENTIALPARDONFORM_H
#include <iostream>

#include "AForm.hpp"
#include "Bureaucrat.hpp"
 
class PresidentialPardonForm : public AForm {
private: 
	std::string target;
public: 
	PresidentialPardonForm(); 
	PresidentialPardonForm( const PresidentialPardonForm &rhs); 
	PresidentialPardonForm(std::string new_target);
	~PresidentialPardonForm(); 
	PresidentialPardonForm& operator=( const PresidentialPardonForm &rhs); 

	void execute(Bureaucrat &burrie) const;
}; 

#endif
