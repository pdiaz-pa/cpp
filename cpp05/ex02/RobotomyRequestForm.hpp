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
	void letsExecute(Bureucrat const & executor) const;
	RobotomyRequestForm(const std::string target);
	RobotomyRequestForm();
	virtual ~RobotomyRequestForm();
};

