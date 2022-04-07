#include "PresidentialPardonForm.hpp"

void PresidentialPardonForm::letsExecute(Bureaucrat const & executor) const{
	if (this->getSigned() == 0)
		throw IsnotSigned();
	else if (executor.getGrade() > this->getReqexec())
		throw GradeTooLowException();
	else{
		std::cout << this->_target << " has been pardoned by Zafod Beeblebrox." << std::endl;
	}
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm & src){
	*this = src;
}

PresidentialPardonForm::PresidentialPardonForm(const std::string target) : Form("PresidentialForm", 25, 5), _target(target)
{
	std::cout << "Presidential Pardon Form created ." << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm() : Form("PresidentialForm", 25, 5), _target("target")
{
	std::cout << "Presidential Pardon Form created." << std::endl;
}

PresidentialPardonForm::~PresidentialPardonForm()
{
	std::cout << "Presidential Pardon Form destroyed." << std::endl;
}
