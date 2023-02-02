#ifndef ROBOTOMYREQUESTFORM_H
#define ROBOTOMYREQUESTFORM_H
#include <iostream>

#include "AForm.hpp"
#include "Bureaucrat.hpp"
 
class RobotomyRequestForm : public AForm {
private:
	std::string target;
public: 
	RobotomyRequestForm(); 
	RobotomyRequestForm(std::string new_target);
	RobotomyRequestForm( const RobotomyRequestForm &rhs); 
	~RobotomyRequestForm(); 
	RobotomyRequestForm& operator=( const RobotomyRequestForm &rhs);

	void execute(Bureaucrat &burrie) const;
}; 
 
#endif
