#include "Form.hpp"

void Form::execute(Bureucrat const & executor) const{
	if (this->_signed == 1 && executor.getGrade() <= this->reqexec){
		letsExecute(executor);
	}
	else{
		throw ExecuteException();
	}
}

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

bool Form::getSigned() const{
	return(this->_signed);
}

void Form::setSigned(){
	this->_signed = 1;
}

std::ostream& operator<<(std::ostream &o, Form const &form){
	o << "Form " << form.getName() << " requires " << form.getReqgrade() << " grade to be signed and " << form.getReqexec() << " grade to be executed.";
	return o; 
}
Form::Form(std::string name, const int reqgrade, const int reqexec) : name(name), reqgrade(reqgrade), reqexec(reqexec) 
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
