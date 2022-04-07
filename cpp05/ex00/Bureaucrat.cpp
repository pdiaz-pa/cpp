#include "Bureaucrat.hpp"


std::ostream& operator<<(std::ostream &o, Bureaucrat const &bureaucrat){
    o << bureaucrat.getName() << ", bureaucrat grade " << bureaucrat.getGrade();
    return o;
}
void Bureaucrat::lessGrade(){
    if (this->grade == 150)
        throw GradeTooLowException();
    else
        this->grade++;
}

Bureaucrat & Bureaucrat::operator=(const Bureaucrat & bureaucrat){
    if (this != &bureaucrat){
        this->grade = bureaucrat.grade;
    }
    return (*this);
}

void Bureaucrat::moreGrade(){
    if(this->grade == 1)
        throw GradeTooHighException();
    else
        this->grade--;
}

int Bureaucrat::getGrade() const {
    return(this->grade);
}

std::string Bureaucrat::getName() const {
    return(this->name);
}

Bureaucrat::Bureaucrat() : name("unknown"), grade(150){
    std::cout << "Default Bureaucrat constructor called: " << std::endl;   
}

Bureaucrat::Bureaucrat(const std::string & name, int grade) : name(name)
{
        if (grade < 1){
            throw GradeTooHighException();     
        }
        if (grade > 150){
            throw GradeTooLowException();
        }
        else{
            std::cout << "Bureaucrat constructor called: " << name <<  std::endl;
            this->grade = grade;
        }
}

Bureaucrat::~Bureaucrat()
{
    std::cout << "Bureaucrat destroyed. " << this->name << std::endl;
}