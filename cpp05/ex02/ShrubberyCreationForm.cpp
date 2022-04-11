#include "ShrubberyCreationForm.hpp"
#include <string>
void ShrubberyCreationForm::letsExecute(Bureaucrat const & executor) const{

	if (this->getSigned() == 0)
		throw IsnotSigned();
	else if (executor.getGrade() > this->getReqexec())
		throw GradeTooLowException();
	else{
		std::cout << "Drawing a beautiful tree in " << (_target + "_shrubbery") << " :) " << std::endl;
		std::ofstream file(_target + "_shrubbery");

		file << "                                                    .	" << std::endl;
		file << "                                              .         ;  	" << std::endl;
		file << "                 .              .              ;%     ;;   	" << std::endl;
		file << "                   ,           ,                :;%  %;   	" << std::endl;
		file << "                    :         ;                   :;%;'     .,   	" << std::endl;
		file << "           ,.        %;     %;            ;        %;'    ,;	" << std::endl;
		file << "             ;       ;%;  %%;        ,     %;    ;%;    ,%'	" << std::endl;
		file << "              %;       %;%;      ,  ;       %;  ;%;   ,%;' 	" << std::endl;
		file << "               ;%;      %;        ;%;        % ;%;  ,%;'	" << std::endl;
		file << "                `%;.     ;%;     %;'         `;%%;.%;'	" << std::endl;
		file << "                 `:;%.    ;%%. %@;        %; ;@%;%'	" << std::endl;
		file << "                    `:%;.  :;bd%;          %;@%;'	" << std::endl;
		file << "                      `@%:.  :;%.         ;@@%;'   	" << std::endl;
		file << "                        `@%.  `;@%.      ;@@%;         	" << std::endl;
		file << "                          `@%%. `@%%    ;@@%;        	" << std::endl;
		file << "                            ;@%. :@%%  %@@%;       	" << std::endl;
		file << "                              %@bd%%%bd%%:;     	" << std::endl;
		file << "                                #@%%%%%:;;	" << std::endl;
		file << "                                %@@%%%::;	" << std::endl;
		file << "                                %@@@%(o);  . '         	" << std::endl;
		file << "                                %@@@o%;:(.,'         	" << std::endl;
		file << "                            `.. %@@@o%::;         	" << std::endl;
		file << "                               `)@@@o%::;         	" << std::endl;
		file << "                                %@@(o)::;        	" << std::endl;
		file << "                               .%@@@@%::;         	" << std::endl;
		file << "                               ;%@@@@%::;.          	" << std::endl;
		file << "                              ;%@@@@%%:;;;. 	" << std::endl;
		file << "                          ...;%@@@@@%%:;;;;,..    Gilo97	" << std::endl;
		file.close();
	}
}

ShrubberyCreationForm & ShrubberyCreationForm::operator=(const ShrubberyCreationForm & rhs){
	(void)rhs;
	return(*this);
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm & src){
	*this = src;
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : Form("ShrubberyForm", 145, 137), _target(target)
{
	std::cout << "Shrubbery Creation Form created." << std::endl;

}

ShrubberyCreationForm::ShrubberyCreationForm() : Form("ShrubberyForm", 145, 137), _target("target")
{
	std::cout << "Standard Shrubbery Creation Form created." << std::endl;

}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
	std::cout << "Shrubbery Creation Form destroyed" << std::endl;
}
