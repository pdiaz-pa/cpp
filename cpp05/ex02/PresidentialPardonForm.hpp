#pragma once
#include "Form.hpp"

class PresidentialPardonForm : public Form
{
private:
	std::string _target;
public:
	void letsExecute(Bureaucrat const & executor) const;
	PresidentialPardonForm & operator=(const PresidentialPardonForm & rhs);
	PresidentialPardonForm(const PresidentialPardonForm & src);
	PresidentialPardonForm(const std::string target);
	PresidentialPardonForm();
	virtual ~PresidentialPardonForm();
};