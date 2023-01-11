#include "Bureaucrat.hpp"

void Bureaucrat::gradeChecker(int &grade) {
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
}

Bureaucrat::Bureaucrat() : 
	name("Nameless Bureaucrat"), grade(150) {}
 
Bureaucrat::Bureaucrat( const Bureaucrat& other) :
	name(other.name), grade(other.grade) {}
 
Bureaucrat::Bureaucrat(const std::string newName, int newGrade) 
	: name(newName), grade(newGrade)
{
	gradeChecker(grade);
}

Bureaucrat::~Bureaucrat() {}

Bureaucrat&	Bureaucrat::operator=( const Bureaucrat& other ) {
	grade = other.grade;

	return *this;
}

Bureaucrat Bureaucrat::operator++(int) {
	grade--;
	gradeChecker(grade);

	return *this;
}

Bureaucrat Bureaucrat::operator--(int) {
	grade++;
	gradeChecker(grade);

	return *this;
}

std::string Bureaucrat::getName() const {
	return (name);
}

int Bureaucrat::getGrade() const {
	return (grade);
}

void Bureaucrat::signAForm(AForm &form) {
	if (form.getSign()) {
		std::cout << "Form has already been signed doughnut, Someone fire this clown" << std::endl;
		return ;
	}
	if (form.beSigned(*this))
		std::cout << *this << " signed " << form << std::endl;
	else
		std::cout << *this << " couldn't sign " << form.getName() << " because Bureaucrat " << name << "'s grade is too low" << std::endl;
}

void Bureaucrat::executeForm(AForm const &form) {
	if (form.getSign()) {
		form.execute(*this);
		std::cout << "Form " << form.getName() << " has been executed by " << getName() << std::endl;
	}
	else
		std::cerr << "Form hasnt been signed yet" << std::endl;
}

std::ostream &operator<<(std::ostream &os, const Bureaucrat &obj) {
	os << obj.getName() << ", Has a Bureaucrat grade of: " << obj.getGrade() << ".";
	
	return os;
}