#pragma once
#include "Form.hpp"
#include <fstream>

class ShrubberyCreationForm : public Form
{
private:
	std::string _target;
public:
	ShrubberyCreationForm(std::string target);
	~ShrubberyCreationForm();
};

