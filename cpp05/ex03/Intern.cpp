#include "Intern.hpp"

Form *makeForm(std::string formname, std::string target){
    
    Form *tmpform = NULL;
    if(formname == "robotomy request")
        tmpform = new RobotomyRequestForm(target);
    else if (formname == "presidential pardon")
        tmpform = new PresidentialPardonForm(target);
    else if (formname == "shrubbery creation")
        tmpform = new ShrubberyCreationForm(target);
    else
        std::cout << "error, unknown form." << std::endl;
    return(tmpform);
}


Intern::Intern(/* args */)
{
}

Intern::~Intern()
{
}