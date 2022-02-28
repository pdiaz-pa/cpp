#include "Bureucrat.hpp"
#include "Form.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "Intern.hpp"

int main(){ 

	Form		*shrub = new ShrubberyCreationForm("home");
	Bureucrat	curro("curro", 1);
	Bureucrat	goku("goku", 140);

	curro.executeForm(*shrub);
	curro.signForm(*shrub);
	std::cout << *shrub << std::endl;
	std::cout << curro << std::endl;
	curro.executeForm(*shrub);
	goku.executeForm(*shrub);
	delete shrub;

std::cout << "----------------------------------------------------------------" << std::endl;

	Form		*robotomy = new RobotomyRequestForm("santana");
	Bureucrat	superman("Superman", 1);

	superman.executeForm(*robotomy);
	superman.signForm(*robotomy);
	superman.executeForm(*robotomy);
	superman.executeForm(*robotomy);
	superman.executeForm(*robotomy);
	superman.executeForm(*robotomy);
	delete robotomy;

std::cout << "----------------------------------------------------------------" << std::endl;
	
	Form		*presidential = new PresidentialPardonForm("marvin");
	Bureucrat	pdr("Pedro Sanchez", 6);

	pdr.executeForm(*presidential);
	pdr.signForm(*presidential);
	pdr.executeForm(*presidential);
	pdr.moreGrade();
	pdr.executeForm(*presidential);
	delete presidential;

	return (0);
std::cout << "----------------------------------------------------------------" << std::endl;
}