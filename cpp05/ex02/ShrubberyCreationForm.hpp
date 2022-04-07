#pragma once
#include "Form.hpp"
#include <fstream>

class ShrubberyCreationForm : public Form
{
private:
	std::string _target;
public:
	void letsExecute(Bureaucrat const & executor) const;
	ShrubberyCreationForm & operator=(const ShrubberyCreationForm & rhs);
	ShrubberyCreationForm(const ShrubberyCreationForm & src);
	ShrubberyCreationForm(std::string target);
	ShrubberyCreationForm();
	virtual ~ShrubberyCreationForm();
};

