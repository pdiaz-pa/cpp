#include "Intern.hpp"

Form *Intern::makeForm(const std::string formname, const std::string target) const {
	
    Form *tmp = NULL;
    Form *arr[3] = {new RobotomyRequestForm(target), new ShrubberyCreationForm(target), new PresidentialPardonForm(target)};
	int i = 0;
	while (i < 3){
    	if(formname == arr[i]->getName()){
			tmp = arr[i];
			break;
		}
		i++;
	}
	i = 0;
	while(i < 3){
	    if(formname != arr[i]->getName()){
			delete arr[i];
		}	
		i++;
	}
	if (tmp)
		std::cout << tmp->getName() << " form created by Intern" << std::endl;
	else{
		std::cout << "error, unknown form." << std::endl;
	}
    	return(tmp);
}


Intern::Intern(/* args */)
{
	std::cout << "Intern constructor called" << std::endl;
}

Intern::~Intern()
{
}