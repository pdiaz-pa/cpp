#pragma once
#include "Form.hpp"

class PresidentialPardonForm : public Form
{
private:
	std::string _target;
public:
	void letsExecute(Bureucrat const & executor) const;
	PresidentialPardonForm(const std::string target);
	PresidentialPardonForm();
	virtual ~PresidentialPardonForm();
};