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
    virtual void letsExecute(Bureucrat const & executor) const = 0;
    virtual void execute(Bureucrat const & executor) const;
	const std::string getName() const;
	bool getSigned() const;
	void setSigned();
	int getReqgrade() const;
	int getReqexec() const;
    void beSigned(Bureucrat &bureucrat);
    Form(const std::string name, const int reqgrade, const int reqexec);
	Form(const Form & form);
	Form();
    virtual ~Form();
};

std::ostream& operator<<(std::ostream &o, Form const &form);


