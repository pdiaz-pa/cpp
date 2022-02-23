#pragma once 
#include <string>
#include "Bureucrat.hpp"

class Bureucrat;

class Form
{
private:
    const std::string name;
    bool _signed;
    const int reqgrade;
    const int reqexec;
public:
    class GradeTooHighException : public std::exception{
	public:
        virtual const char *what() const throw()
        {
        	return ("Form::exception : Grade is too high");
        }
    };
    class GradeTooLowException : public std::exception{
	public:
        virtual const char *what() const throw()
        {
        	return ("Form::exception : Grade is too low");
        }
    };
	const std::string getName() const;
	bool getSigned();
	void setSigned();
	int getReqgrade() const;
	int getReqexec() const;
    void beSigned(Bureucrat &bureucrat);
    Form(const std::string name, const int reqgrade, const int reqexec);
	Form(const Form & form);
	Form();
    ~Form();
};

std::ostream& operator<<(std::ostream &o, Form const &form);


