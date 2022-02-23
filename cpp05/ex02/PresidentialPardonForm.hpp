#pragma once
#include "Form.hpp"

class PresidentialPardonForm : public Form
{
private:
	std::string _target;
public:
	PresidentialPardonForm(std::string target);
	~PresidentialPardonForm();
};

