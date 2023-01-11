#include "AForm.hpp"

const int AForm::gradeChecker(int grade) {
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
			std::cerr << "AForm::GradeTooLowException" << std::endl;
		}
		if (error == 1) {
			std::cerr << "AForm::GradeTooHighException" << std::endl;
		}
	}
	return (grade);
}

AForm::AForm()
	: name("Unset AForm"), sign(0), sign_grade(150), execute_grade(150)
{

}
 
AForm::AForm( const AForm& other) :
	sign_grade(other.sign_grade), execute_grade(other.execute_grade) {
	sign = other.sign;

	*this = other;
}
 
AForm::AForm(const std::string newName, bool newSigned, const int newSign_grade, const int newExecute_grade) 
	: name(newName), sign(newSigned), sign_grade(gradeChecker(newSign_grade)), execute_grade(gradeChecker(newExecute_grade))
{

}

AForm::~AForm() {

}

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
	try {
		if (burrie.getGrade() <= sign_grade) {
			sign = 1;
			return (1);
		}
		else
			throw(2);
	}
	catch (int error) {
		std::cerr << "AForm::GradeTooLowException" << std::endl;
		return (0);
	}
}

// void AForm::execute(Bureaucrat &executor) {

// }

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