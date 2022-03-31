#include "span.hpp"
void span::fillTheVector(std::vector<int> extvector){
	for(std::vector<int>::const_iterator it = extvector.begin(); it != extvector.end(); it++){
		if(this->actualsize < this->maxsize){
			this->addNumber(*it);
			actualsize++;
		}
		else
			throw TooMuchNumbers();
	}	
}
int span::longestSpan(){
	if (this->intvct.size() < 2)
		throw NotEnoughNumbers();
	std::vector<int>::iterator itmin = std::min_element((intvct.begin()), intvct.end());
	std::vector<int>::iterator itmax = std::max_element(intvct.begin(), intvct.end());

	std::cout << "max number:  " << *itmax << "     min number:  " << *itmin << std::endl;
	return (*itmax - *itmin);
};

int span::shortestSpan(){
	if (this->intvct.size() < 2)
		throw NotEnoughNumbers();
	std::vector<int>::iterator itmin = std::min_element(intvct.begin(), intvct.end());
	std::vector<int>::iterator itsecmin;
	if (intvct.size() == 2){
		
		itsecmin  = std::max_element(intvct.begin(), intvct.end());
	}
	else if (itmin == intvct.begin()){
		itsecmin = std::min_element(itmin + 1, intvct.end());
	}
	else
		itsecmin = std::min(std::min_element(intvct.begin(), itmin - 1), std::min_element(itmin + 1, intvct.end()));
	std::cout << "secmin number:  " << *itsecmin << "     min number:  " << *itmin << std::endl;
	return(*itsecmin - *itmin);
};
void span::addNumber(int value){
	intvct.push_back(value);
};

span & span::operator=(const span & rhs){
	if (this != &rhs){
		this->actualsize = rhs.actualsize;
		this->maxsize = rhs.maxsize;
		this->intvct = rhs.intvct;
	}
	return(*this);
}

span::span() : maxsize(0), actualsize(0){
    std::cout << "Default constructor called" << std::endl;
};

span::span(unsigned int n) :  maxsize(n), actualsize(0){
    std::cout << "Constructor called" << std::endl;
};

span::span(const span & src){
	*this = src;
}

span::~span(){
    std::cout << "Destructor called" << std::endl;
};

std::ostream & operator<<(std::ostream & o, const span &src){
	src.printer(o);
	return (o);
}

void span::printer(std::ostream & o) const {
	o << "printing vector data: ";
	for (unsigned int i = 0; i < this->actualsize; i++){
		o << this->intvct[i] << " ";
	}
	o << std::endl;
}