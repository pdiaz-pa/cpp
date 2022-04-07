#pragma once 
#include <string>
#include "Bureaucrat.hpp"

class Bureaucrat;

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
        void beSigned(Bureaucrat &bureaucrat);
        Form & operator=(const Form &form);
        Form(const std::string name, const int reqgrade, const int reqexec);
    	Form(const Form & src);
    	Form();
        ~Form();
};

std::ostream& operator<<(std::ostream &o, Form const &form);


