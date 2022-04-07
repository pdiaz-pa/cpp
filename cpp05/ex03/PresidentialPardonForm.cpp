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

PresidentialPardonForm::PresidentialPardonForm(const std::string target) : Form("presidential pardon", 25, 5), _target(target)
{
	std::cout << "Presidential Pardon Form created ." << std::endl;
}
PresidentialPardonForm::PresidentialPardonForm() : Form("presidential pardon", 25, 5), _target("target")
{
	std::cout << "Presidential Pardon Form created." << std::endl;
}

PresidentialPardonForm::~PresidentialPardonForm()
{
	std::cout << "presidential pardon destroyed" << std::endl;
}
