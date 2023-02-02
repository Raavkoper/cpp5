#include "AForm.hpp"

AForm::AForm()
	: name("Unset AForm"), sign(0), sign_grade(150), execute_grade(150)
{}
 
AForm::AForm( const AForm& other) :
	sign_grade(other.sign_grade), execute_grade(other.execute_grade) {
	sign = other.sign;

	*this = other;
}
 
AForm::AForm(const std::string newName, bool newSigned, const int newSign_grade, const int newExecute_grade) 
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

AForm::~AForm() {}

AForm&	AForm::operator=( const AForm& other ) {
	return *this;
}

/* --getters-- */

const int AForm::getSign_grade() const {
	return (sign_grade);
}

const int AForm::getExecute_grade() const {
	return (execute_grade);
}

const std::string AForm::getName() const {
	return (name);
}

bool AForm::getSign() const {
	return (sign);
}

bool AForm::beSigned(Bureaucrat &burrie) {
	if (burrie.getGrade() <= sign_grade) {
		sign = 1;
		return (1);
	}
	else {
		throw GradeTooLowException();
		return (0);
	}
}

const char *AForm::GradeTooLowException::what() const throw() {
	return ("Grade's too low");
}

const char *AForm::GradeTooHighException::what() const throw() {
	return ("Grade's too high");
}

const char *AForm::FormNotSignedException::what() const throw() {
	return ("Form is not signed");
}

void AForm::setSign(bool new_sign) {
	sign = new_sign;
}

std::ostream &operator<<(std::ostream &os, AForm &obj) {
	os << "AForm: " << obj.getName() << ", signed: ";
	if (obj.getSign())
		os << "True, with grade: " << obj.getSign_grade() << ", and executed with grade: " << obj.getExecute_grade();
	else
		os << "False";
	return (os);
}