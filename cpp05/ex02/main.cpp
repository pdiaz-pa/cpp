#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
int main(){
    Bureaucrat *goku = new Bureaucrat("goku", 20);
	Form *form = new ShrubberyCreationForm("formulario");
    std::cout << *goku << std::endl;
	std::cout << *form << std::endl;
	form->beSigned(*goku);
    goku->executeForm(*form);
    
try
{
    Bureaucrat *piccolo = new Bureaucrat("Piccolo", 1);
	Form *form = new RobotomyRequestForm("cell");
    std::cout << *piccolo << std::endl;
	std::cout << *form << std::endl;
    form->beSigned(*piccolo);
    form->execute(*piccolo);
    piccolo->executeForm(*form);
}
catch(const std::exception& e)
{
    std::cerr << e.what() << '\n';
}
std::cout << "----------------------------------------------------------------" << std::endl;
try
{
    Bureaucrat *goku = new Bureaucrat("goku", 20);
	Form *form = new ShrubberyCreationForm("formulario");
    std::cout << *goku << std::endl;
	std::cout << *form << std::endl;
	form->beSigned(*goku);
    goku->executeForm(*form);

}
catch(const std::exception& e)
{
    std::cerr << e.what() << '\n';
}
std::cout << "----------------------------------------------------------------" << std::endl;
try
{
    Bureaucrat *curro = new Bureaucrat("curro", 20);
	Form *form = new ShrubberyCreationForm("arbolito");
    std::cout << *curro << std::endl;
	std::cout << *form << std::endl;
    form->beSigned(*curro);
    form->execute(*curro);

}
catch(const std::exception& e)
{
    std::cerr << e.what() << '\n';
}
std::cout << "----------------------------------------------------------------" << std::endl;
try
{
    Bureaucrat *vegeta = new Bureaucrat("vegeta", 2);
	Form *form = new PresidentialPardonForm("elpepe");
    std::cout << *vegeta << std::endl;
	std::cout << *form << std::endl;
    form->beSigned(*vegeta);
    form->execute(*vegeta);

}
catch(const std::exception& e)
{
    std::cerr << e.what() << '\n';
}
std::cout << "----------------------------------------------------------------" << std::endl;
}