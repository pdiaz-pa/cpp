#include "Form.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"
class Intern
{
public:
    static Form *makeForm(std::string formname, std::string target);
    Intern(/* args */);
    ~Intern();
};

