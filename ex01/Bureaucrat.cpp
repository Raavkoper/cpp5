#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : 
	name("Nameless Bureaucrat"), grade(150) {}
 
Bureaucrat::Bureaucrat( const Bureaucrat& other) :
	name(other.name), grade(other.grade) {}
 
Bureaucrat::Bureaucrat(const std::string newName, int newGrade) 
	: name(newName), grade(newGrade)
{
	setGrade(newGrade);
}

Bureaucrat::~Bureaucrat() {}

Bureaucrat&	Bureaucrat::operator=( const Bureaucrat& other ) {
	grade = other.grade;

	return *this;
}

Bureaucrat Bureaucrat::operator++(int) {
	setGrade(grade - 1);

	return *this;
}

Bureaucrat Bureaucrat::operator--(int) {
	setGrade(grade + 1);

	return *this;
}

void Bureaucrat::setGrade(int new_grade) {
	if (new_grade < 1)
		throw GradeTooHighException();
	else if (new_grade > 150)
		throw GradeTooLowException();
	else
		grade = new_grade;
}

std::string Bureaucrat::getName() const {
	return (name);
}

int Bureaucrat::getGrade() const {
	return (grade);
}

void Bureaucrat::signForm(Form &form) {
	if (form.beSigned(*this))
		std::cout << *this << " signed " << form << std::endl;
	else
		std::cout << *this << " couldn't sign " << form.getName() << " because Bureaucrat " << name << "'s grade is too low" << std::endl;

}

const char *Bureaucrat::GradeTooLowException::what() const throw() {
	return ("Grade's too low");
}

const char *Bureaucrat::GradeTooHighException::what() const throw() {
	return ("Grade's too high");
}

std::ostream &operator<<(std::ostream &os, const Bureaucrat &obj) {
	os << obj.getName() << ", Has a Bureaucrat grade of: " << obj.getGrade() << ".";
	
	return os;
}