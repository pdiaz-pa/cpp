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
    class WasAlreadySigned : public std::exception{
        public:
            virtual const char *what() const throw()
            {
                return("This form was already signed.");
            }
    };
    class IsnotSigned : public std::exception{
        public:
            virtual const char *what() const throw()
            {
                return("This form is not signed!");
            }
    };
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
    class ExecuteException : public std::exception{
	public:
        virtual const char *what() const throw()
        {
        	return ("Form::exception : this Form is not executable by this executor");
        }
    };
    virtual void letsExecute(Bureaucrat const & executor) const = 0;
    void execute(Bureaucrat const & executor) const;
	const std::string getName() const;
	bool getSigned() const;
	void setSigned();
	int getReqgrade() const;
	int getReqexec() const;
    void beSigned(Bureaucrat &bureaucrat);
    Form & operator=(const Form &form);
    Form(const Form & src);
    Form(const std::string name, const int reqgrade, const int reqexec);
	Form();
    virtual ~Form();
};

std::ostream& operator<<(std::ostream &o, Form const &form);


