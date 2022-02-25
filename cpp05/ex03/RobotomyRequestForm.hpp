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
	virtual Form *makeForm(std::string formname, std::string target);
	void letsExecute(Bureucrat const & executor) const;
	RobotomyRequestForm(const std::string target);
	RobotomyRequestForm();
	virtual ~RobotomyRequestForm();
};

