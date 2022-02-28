#include "Bureucrat.hpp"
void Bureucrat::executeForm(Form const & form){
	try{
        std::cout << this->name << " executes " << form.getName() << std::endl;
        form.execute(*this);
    }
    catch(const std::exception &e){
        std::cerr << this->name << " can't execute " << form.getName() << " because " << e.what() << ". sign status:  " << form.getSigned() << ". grade to be executed: " << form.getReqexec() << '\n';
    }
}

std::ostream& operator<<(std::ostream &o, Bureucrat const &bureucrat){
    o << bureucrat.getName() << ", bureucrat grade " << bureucrat.getGrade();
    return o;
}

void Bureucrat::signForm(Form &form){
	try
	{
        if(this->grade > form.getReqgrade()){
			throw GradeTooLowException();
		}
		else{
			std::cout << this->name << " signs " << form.getName() << std::endl;
            form.setSigned();
		}
	}
	catch(const std::exception& e)
	{
		std::cerr << this->name << " can't sign " << form.getName() << " because " << e.what() << '\n';
	}
	
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