#ifndef AFORM_H
#define AFORM_H

#include <iostream>
#include "Bureaucrat.hpp"

class Bureaucrat;
 
class AForm {
private: 
	const std::string name;
	bool sign;
	const int sign_grade;
	const int execute_grade;
 
public: 
	AForm(); 
	AForm( const AForm &other); 
	AForm(const std::string newName, bool newSigned, const int newSign_grade, const int newExecute_grade);
	~AForm(); 
	AForm& operator=( const AForm &other); 

	const int gradeChecker(int grade);
	const int getSign_grade();
	const int getExecute_grade();
	const std::string getName();
	bool getSign();

	bool beSigned(Bureaucrat &burrie);
}; 
 
std::ostream &operator<<(std::ostream &os, AForm &obj);

#endif
