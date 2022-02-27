#pragma once
#include "Form.hpp"
#include <fstream>

class ShrubberyCreationForm : public Form
{
private:
	std::string _target;
public:
	void letsExecute(Bureucrat const & executor) const;
	ShrubberyCreationForm(std::string target);
	ShrubberyCreationForm();
	virtual ~ShrubberyCreationForm();
};

