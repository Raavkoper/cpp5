#ifndef BUREAUCRAT_H
#define BUREAUCRAT_H

#include <iostream>
#include "Form.hpp"

class Form;
 
class Bureaucrat {
private: 
	const std::string name;
	int grade;
 
public: 
	Bureaucrat(); 
	Bureaucrat( const Bureaucrat &other); 
	Bureaucrat(std::string newName, int newGrade);
	~Bureaucrat(); 
	Bureaucrat& operator=( const Bureaucrat &other);

	Bureaucrat operator++(int);
	Bureaucrat operator--(int);

	class GradeTooLowException : public std::exception {
		const char *what() const throw();
	};

	class GradeTooHighException : public std::exception {
		const char *what() const throw();
	};

	void setGrade(int new_grade);
	std::string getName() const;
	int	getGrade() const;
	void signForm(Form &form);
}; 

std::ostream &operator<<(std::ostream &os, const Bureaucrat &obj);
#endif
