#ifndef SHRUBBERYCREATIONFORM_H
#define SHRUBBERYCREATIONFORM_H

#include <iostream>
#include "AForm.hpp"
#include <fstream>
 
class ShrubberyCreationForm : public AForm {
private: 
	std::string target;
public: 
	ShrubberyCreationForm(); 
	ShrubberyCreationForm( const ShrubberyCreationForm &other);
	ShrubberyCreationForm(std::string new_target);
	~ShrubberyCreationForm(); 
	ShrubberyCreationForm& operator=( const ShrubberyCreationForm &other);

	void execute(Bureaucrat &burrie) const;
}; 
 
#endif
