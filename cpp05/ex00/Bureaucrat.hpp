#pragma once
#include <string>
#include <iostream>


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
    void moreGrade();
    void lessGrade();
    std::string getName() const;
    int getGrade() const;
    Bureaucrat & operator=(const Bureaucrat & bureaucrat);
    Bureaucrat(const std::string & name, int grade);
    Bureaucrat();
    ~Bureaucrat();
protected:
    const std::string name;
    int grade;
};

std::ostream& operator<<(std::ostream &o, Bureaucrat const &Bureaucrat);
