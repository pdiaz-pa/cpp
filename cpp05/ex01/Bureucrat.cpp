#include "Bureucrat.hpp"


std::ostream& operator<<(std::ostream &o, Bureucrat const &bureucrat){
    o << bureucrat.getName() << ", bureucrat grade " << bureucrat.getGrade();
    return o;
}
void Bureucrat::lessGrade(){
    if (this->grade == 150)
        throw GradeTooLowException();
    else
        this->grade++;
}

Bureucrat & Bureucrat::operator=(const Bureucrat & bureucrat){
    if (this != &bureucrat){
        this->grade = bureucrat.grade;
    }
    return (*this);
}

void Bureucrat::moreGrade(){
    if(this->grade == 1)
        throw GradeTooHighException();
    else
        this->grade--;
}

int Bureucrat::getGrade() const {
    return(this->grade);
}

std::string Bureucrat::getName() const {
    return(this->name);
}

Bureucrat::Bureucrat() : name("unknown"), grade(150){
    
}

Bureucrat::Bureucrat(const std::string & name, int grade) : name(name)
{
        std::cout << "Bureucrat constructor called: " << name <<  std::endl;
        if (grade < 1)
            throw GradeTooHighException();
        else if (grade > 150)
            throw GradeTooLowException();
        else{
            this->grade = grade;
        }
}

Bureucrat::~Bureucrat()
{
    std::cout << "Bureucrat destroyed. " << this->name << std::endl;
}