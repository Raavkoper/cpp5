#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() : AForm("PresidentialPardonForm", 0, 25, 5) {};

PresidentialPardonForm::PresidentialPardonForm(std::string new_target)
	: target(new_target), AForm("PresidentialPardonForm", 0, 25, 5) {};
 
PresidentialPardonForm::PresidentialPardonForm( const PresidentialPardonForm& other) {
	target = other.target;
}

PresidentialPardonForm::~PresidentialPardonForm() {};

PresidentialPardonForm&	PresidentialPardonForm::operator=( const PresidentialPardonForm& rhs ) {
	return *this;
}

void PresidentialPardonForm::execute(Bureaucrat &burrie) const {
	std::cout << target << " has been pardoned by Zaphod Beeblebrox." << std::endl;
}
