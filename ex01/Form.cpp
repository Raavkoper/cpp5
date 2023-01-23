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
	: name(newName), sign(newSigned), sign_grade(gradeChecker(newSign_grade)), execute_grade(gradeChecker(newExecute_grade))
{}

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
	try {
		if (burrie.getGrade() <= sign_grade) {
			sign = 1;
			return (1);
		}
		else
			throw(2);
	}
	catch (int error) {
		std::cerr << "Form::GradeTooLowException" << std::endl;
		return (0);
	}
}

void Form::setGrade(int new_grade) {
	if (new_grade < 1)
		throw GradeTooHighException();
	else if (new_grade > 150)
		throw GradeTooLowException();
	else
		grade = new_grade;
}

std::ostream &operator<<(std::ostream &os, Form &obj) {
	os << "Form: " << obj.getName() << ", signed: ";
	if (obj.getSign())
		os << "True, with grade: " << obj.getSign_grade() << ", and executed with grade: " << obj.getExecute_grade();
	else
		os << "False";
	return (os);
}