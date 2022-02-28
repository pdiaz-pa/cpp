#include "Bureucrat.hpp"
#include "Form.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
int main(){
    Bureucrat *goku = new Bureucrat("goku", 20);
	Form *form = new ShrubberyCreationForm("formulario");
    std::cout << *goku << std::endl;
	std::cout << *form << std::endl;
	form->beSigned(*goku);
    goku->executeForm(*form);
    /*
try
{
    Bureucrat *piccolo = new Bureucrat("Piccolo", 1);
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
    Bureucrat *goku = new Bureucrat("goku", 20);
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
    Bureucrat *curro = new Bureucrat("curro", 20);
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
    Bureucrat *vegeta = new Bureucrat("vegeta", 2);
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
*/
}