#pragma once
#include "Form.hpp"


class RobotomyRequestForm : public Form
{
private:
	std::string _target;
public:
	RobotomyRequestForm(const std::string target);
	~RobotomyRequestForm();
};

