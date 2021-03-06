#include "RobotomyRequestForm.hpp"
#include <cstdlib>
void RobotomyRequestForm::letsExecute(Bureaucrat const & executor) const{
	if (this->getSigned() == 0)
		throw IsnotSigned();
	else if (executor.getGrade() > this->getReqexec())
		throw GradeTooLowException();
	else{
		std::cout << "**//**/*CLINGCLANGCLING#|#|≤≤#|#≤#PLOP!" << std::endl;
		int coin = rand() % 2;
		if (coin == 0){
			std::cout << _target << " has been robotomized successfully!!" << std::endl;
		}
		else{
			throw RobotomyException();
		}
	}
}

RobotomyRequestForm & RobotomyRequestForm::operator=(const RobotomyRequestForm & rhs){
	(void)rhs;
	return(*this);
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm & src){
	*this = src;
}

RobotomyRequestForm::RobotomyRequestForm(const std::string target)  : Form("RobotomyForm", 72, 45), _target(target)
{
	std::cout << "Robotomy Request Form created." << std::endl;

}

RobotomyRequestForm::RobotomyRequestForm()  : Form("StandardRobotomyForm", 72, 45), _target("target")
{
	std::cout << "Standard Robotomy Request Form created." << std::endl;

}

RobotomyRequestForm::~RobotomyRequestForm()
{
	std::cout << "Robotomy Request Form destroyed." << std::endl;
}
