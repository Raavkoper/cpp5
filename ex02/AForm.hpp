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
	const int getSign_grade() const;
	const int getExecute_grade() const;
	const std::string getName() const;
	bool getSign() const;

	void setSign(bool new_sign);
	void virtual execute(Bureaucrat &executor) const = 0;
	bool beSigned(Bureaucrat &burrie);
}; 
 
std::ostream &operator<<(std::ostream &os, AForm &obj);

#endif
