#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm()
	: target("Unset"), AForm("ShrubberyCreationForm", 0, 145, 137)
{}

ShrubberyCreationForm::ShrubberyCreationForm(std::string new_target) :
	target(new_target), AForm("ShrubberyCreationForm", 0, 145, 137)
{}

ShrubberyCreationForm::ShrubberyCreationForm( const ShrubberyCreationForm& other) {
	target = other.target;

	*this = other;
}
 
ShrubberyCreationForm::~ShrubberyCreationForm() {

}

ShrubberyCreationForm&	ShrubberyCreationForm::operator=( const ShrubberyCreationForm& other ) {
	return *this;
}

void ShrubberyCreationForm::execute(Bureaucrat &burrie) const {
	if (!getSign()) {
		std::cout << "Form hasnt been signed yet!" << std::endl;
		return ;
	}
	std::ofstream file;
	file.open(target + "_shrubbery");
	file << "      /\\" << std::endl;
	file << "     /\\*\\" << std::endl;
	file << "    /\\O\\*\\" << std::endl;
	file << "   /*/\\/\\/\\" << std::endl;
	file << "  /\\O\\/\\*\\/\\" << std::endl;
	file << " /\\*\\/\\*\\/\\/\\" << std::endl;
	file << "/\\O\\/\\/*/\\/O/\\" << std::endl;
	file << "      ||" << std::endl;
	file << "      ||" << std::endl;
	file << "      ||" << std::endl;
	file << std::endl;
	file << "Signed by Bureaucrat " << burrie.getName();
	file.close();
}