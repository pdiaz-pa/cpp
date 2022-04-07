#pragma once
#include <string>
#include <iostream>
#include "Form.hpp"

class Form;

class Bureaucrat
{
    public:
    class GradeTooHighException : public std::exception{
		public:
        	virtual const char *what() const throw()
        	{
        		return ("Bureaucrat::exception : Grade is too high");
        	}
    	};
    class GradeTooLowException : public std::exception{
		public:
    	    virtual const char *what() const throw()
    	    {
        		return ("Bureaucrat::exception : Grade is too low");
        	}
    	};
    void executeForm(Form const & form);
	void signForm(Form &form);
    Bureaucrat & operator=(const Bureaucrat & bureaucrat);
    void moreGrade();
    void lessGrade();
    std::string getName() const;
    int getGrade() const;
    Bureaucrat(const std::string & name, int grade);
    Bureaucrat();
    virtual ~Bureaucrat();
protected:
    const std::string name;
    int grade;
};

std::ostream& operator<<(std::ostream &o, Bureaucrat const &bureaucrat);
