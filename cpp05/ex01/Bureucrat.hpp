#pragma once
#include <string>
#include <iostream>


class Bureucrat
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
    Bureucrat & operator=(const Bureucrat & bureucrat);
    void moreGrade();
    void lessGrade();
    std::string getName() const;
    int getGrade() const;
    Bureucrat(const std::string & name, int grade);
    Bureucrat();
    virtual ~Bureucrat();
protected:
    const std::string name;
    int grade;
};

std::ostream& operator<<(std::ostream &o, Bureucrat const &bureucrat);
