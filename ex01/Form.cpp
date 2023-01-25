#include "Form.hpp"

Form::Form()
	: name("Unset Form"), sign(0), sign_grade(150), execute_grade(150)
{}
 
Form::Form( const Form& other) :
	sign_grade(other.sign_grade), execute_grade(other.execute_grade) {
	sign = other.sign;

	*this = other;
}
 
Form::Form(const std::string newName, bool newSigned, const int newSign_grade, const int newExecute_grade) 
	: name(newName), sign(newSigned), sign_grade(newSign_grade), execute_grade(newExecute_grade)
{
	if (sign_grade > 150)
		throw GradeTooLowException();
	else if (sign_grade < 1)
		throw GradeTooHighException();
	if (execute_grade > 150)
		throw GradeTooLowException();
	else if (execute_grade < 1)
		throw GradeTooHighException();
}

Form::~Form() {}

Form&	Form::operator=( const Form& other ) {
	return *this;
}

/* --getters-- */

const int Form::getSign_grade() {
	return (sign_grade);
}

const int Form::getExecute_grade() {
	return (execute_grade);
}

const std::string Form::getName() {
	return (name);
}

bool Form::getSign() {
	return (sign);
}

bool Form::beSigned(Bureaucrat &burrie) {
	if (burrie.getGrade() <= sign_grade) {
		sign = 1;
		return (1);
		}
	else {
		throw GradeTooLowException();
		return (0);
	}
}

const char *Form::GradeTooLowException::what() const throw() {
	return ("Grade's too low");
}

const char *Form::GradeTooHighException::what() const throw() {
	return ("Grade's too high");
}

std::ostream &operator<<(std::ostream &os, Form &obj) {
	os << "Form: " << obj.getName() << ", signed: ";
	if (obj.getSign())
		os << "True, with grade: " << obj.getSign_grade() << ", and executed with grade: " << obj.getExecute_grade();
	else
		os << "False";
	return (os);
}