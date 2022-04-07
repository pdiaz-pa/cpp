#pragma once
#include "Form.hpp"

class RobotomyRequestForm : public Form
{
private:
	std::string _target;
public:
	class RobotomyException : public std::exception{
		public:
			virtual const char *what() const throw(){
				return ("Unsuccessful robotomy. :(");
			}
	};
	void letsExecute(Bureaucrat const & executor) const;
	RobotomyRequestForm & operator=(const RobotomyRequestForm & rhs);
	RobotomyRequestForm(const RobotomyRequestForm & src);
	RobotomyRequestForm(const std::string target);
	RobotomyRequestForm();
	virtual ~RobotomyRequestForm();
};

