#include "Bureucrat.hpp"
#include "Form.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "Intern.hpp"
int main(){ 
try
{
    
    Form *test = Intern::makeForm("presidential pardon", "pepe");

    std::cout << test << std::endl;

}
catch(const std::exception& e)
{
    std::cerr << e.what() << '\n';
}
std::cout << "----------------------------------------------------------------" << std::endl;
}