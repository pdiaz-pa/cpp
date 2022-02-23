#include "Form.hpp"

void Form::beSigned(Bureucrat &bureucrat){
	if (bureucrat.getGrade() > this->reqgrade){
		throw GradeTooLowException();
	}
	else
	{
		std::cout << this->name << " was signed by " << bureucrat.getName() << std::endl;
		_signed = 1;
	}
}


int Form::getReqgrade() const{
	return(this->reqgrade);
}

int Form::getReqexec() const{
	return(this->reqexec);
}

const std::string Form::getName() const{
	return(this->name);
}

void Form::setSigned(){
	this->_signed = 1;
}

std::ostream& operator<<(std::ostream &o, Form const &form){
	o << "Form " << form.getName() << " requires " << form.getReqgrade() << " grade to be signed and " << form.getReqexec() << " grade to be executed." << std::endl;
	return o; 
}
Form::Form() : name(name), reqgrade(reqgrade), reqexec(reqexec) 
{
	_signed = 0;
	if (reqexec > 150 || reqgrade > 150)
		throw GradeTooLowException();
	else if (reqexec < 1 || reqgrade < 1)
		throw GradeTooHighException();
	else{
		std::cout << "Form created." << std::endl;
	}
}


Form::Form() : name("standardform"), reqgrade(150), reqexec(150){
	_signed = 0;
}

Form::~Form()
{
}
