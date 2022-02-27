#include "Bureucrat.hpp"
#include "Form.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "Intern.hpp"
int main(){ 
    Intern unpayedguy;
    Form *test;

	test = unpayedguy.makeForm("presidential pardon", "pipi");
	test = unpayedguy.makeForm("shrubbery creation", "pipi");
	test = unpayedguy.makeForm("robotomy request", "pipi");
	test = unpayedguy.makeForm("declaracion de la renta", "pipi");
std::cout << "----------------------------------------------------------------" << std::endl;
}