#include "Form.hpp"

const int Form::gradeChecker(int grade) {
	try {
		if (grade < 1) {
			grade = 1;
			throw 1;
		}
		if (grade > 150) {
			grade = 150;
			throw 2;
		}
	}
	catch (int error) {
		if (error == 2) {
			std::cerr << "Bureaucrat::GradeTooLowException" << std::endl;
		}
		if (error == 1) {
			std::cerr << "Bureaucrat::GradeTooHighException" << std::endl;
		}
	}
	return (grade);
}

Form::Form()
	: name("Unset Form"), sign(0), sign_grade(150), execute_grade(150)
{

}
 
Form::Form( const Form& other) {
	sign = other.sign;

	*this = other;
}
 
Form::Form(const std::string newName, bool newSigned, const int newSign_grade, const int newExecute_grade) 
	: name(newName), sign(newSigned), sign_grade(gradeChecker(newSign_grade)), execute_grade(gradeChecker(newExecute_grade))
{

}

Form::~Form() {

}

Form&	Form::operator=( const Form& rhs ) {
	return *this;
}
