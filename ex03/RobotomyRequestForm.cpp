#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm()
	: AForm("RobotomyRequestForm", 0, 72, 45) {}

RobotomyRequestForm::RobotomyRequestForm(std::string new_target)
	: target(new_target), AForm("RobotomyRequestForm", 0, 72, 45) {}
 
RobotomyRequestForm::RobotomyRequestForm( const RobotomyRequestForm& other) {
	target = other.target;
}
 
RobotomyRequestForm::~RobotomyRequestForm() {}

RobotomyRequestForm&	RobotomyRequestForm::operator=( const RobotomyRequestForm& rhs ) {
	return *this;
}

void RobotomyRequestForm::execute(Bureaucrat &burrie) const {
	static int i;

	if (i % 2)
		std::cout << target << " has been robotomized successfully" << std::endl;
	else
		std::cout << target << " has failed being robotomized" << std::endl;
	i++;
	i %= 2;
}