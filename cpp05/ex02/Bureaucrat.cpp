#include "Bureaucrat.hpp"
void Bureaucrat::executeForm(Form const & form){
	try{
        std::cout << this->name << " executes " << form.getName() << std::endl;
        form.execute(*this);
    }
    catch(const std::exception &e){
        std::cerr << this->name << " can't execute " << form.getName() << " because " << e.what() << '\n';
    }
}

std::ostream& operator<<(std::ostream &o, Bureaucrat const &bureaucrat){
    o << bureaucrat.getName() << ", bureaucrat grade " << bureaucrat.getGrade();
    return o;
}

void Bureaucrat::signForm(Form &form){
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
    std::cout << "Default Bureaucrat constructor called: " << name <<  std::endl;    
}

Bureaucrat::Bureaucrat(const std::string & name, int grade) : name(name)
{

        if (grade < 1)
            throw GradeTooHighException();
        else if (grade > 150)
            throw GradeTooLowException();
        else{
            std::cout << "Bureaucrat constructor called: " << name <<  std::endl;
            this->grade = grade;
        }
}

Bureaucrat::~Bureaucrat()
{
    std::cout << "Bureaucrat destroyed. " << this->name << std::endl;
}