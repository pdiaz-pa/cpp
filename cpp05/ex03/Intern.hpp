#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"
class Intern
{
public:
    Form *makeForm(const std::string formname, const std::string target) const;
    Intern();
    virtual ~Intern();
};

