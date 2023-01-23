#ifndef FORM_H
#define FORM_H

#include <iostream>
#include "Bureaucrat.hpp"

class Bureaucrat;
 
class Form {
private: 
	const std::string name;
	bool sign;
	const int sign_grade;
	const int execute_grade;
 
public: 
	Form(); 
	Form( const Form &other); 
	Form(const std::string newName, bool newSigned, const int newSign_grade, const int newExecute_grade);
	~Form(); 
	Form& operator=( const Form &other); 

	class GradeTooLowException : public std::exception {
		const char *what() const throw();
	};

	class GradeTooHighException : public std::exception {
		const char *what() const throw();
	};
	void setGrade(int new_grade);
	const int getSign_grade();
	const int getExecute_grade();
	const std::string getName();
	bool getSign();

	bool beSigned(Bureaucrat &burrie);
}; 
 
std::ostream &operator<<(std::ostream &os, Form &obj);

#endif
