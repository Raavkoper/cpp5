#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"

int main() {
	ShrubberyCreationForm shrubby("Bamboo");
	Bureaucrat jonna("Jonna", 145), mika("Mika", 50), fresku("Fresku", 4);

	mika.signAForm(shrubby);
	mika.signAForm(shrubby);
	mika.executeForm(shrubby);
	
}
