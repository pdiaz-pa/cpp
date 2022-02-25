#include "ShrubberyCreationForm.hpp"
#include <string>

Form *makeForm(std::string formname, std::string target){
	std::cout << "shrubbery makeform" << formname << target <<  std::endl;
	Form *tmp = new ShrubberyCreationForm(target);
	return (tmp);
}

void ShrubberyCreationForm::letsExecute(Bureucrat const & executor) const{

	if (this->getSigned() == 0)
		throw IsnotSigned();
	else if (executor.getGrade() > this->getReqexec())
		throw GradeTooLowException();
	else{
		std::cout << "Drawing a beautiful tree in " << (_target + "_shrubbery") << " :) " << std::endl;
		std::ofstream file(_target);

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
}