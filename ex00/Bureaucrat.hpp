#ifndef BUREAUCRAT_H
#define BUREAUCRAT_H

#include <iostream>
 
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


	void gradeChecker(int &grade);
	std::string getName() const;
	int	getGrade() const;
}; 

std::ostream &operator<<(std::ostream &os, const Bureaucrat &obj);
#endif
