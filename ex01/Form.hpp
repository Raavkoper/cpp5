#ifndef FORM_H
#define FORM_H
#include <iostream>
 
class Form {
private: 
	const std::string name;
	bool sign;
	const int sign_grade;
	const int execute_grade;
 
public: 
	Form(); 
	Form( const Form &rhs); 
	Form(const std::string newName, bool newSigned, const int newSign_grade, const int newExecute_grade);
	~Form(); 
	Form& operator=( const Form &rhs); 

	const int gradeChecker(int grade);
}; 
 
#endif
