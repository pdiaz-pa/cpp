#include "Data.hpp"
#include <iomanip>

void Data::charPrinter(){
    if (_char > 30 && _char < 126)
        std::cout << "char: '" << this->_char << "'" <<  std::endl;
    else if (_char == 0 && _oofchar == 0)
        std::cout << "char: impossible"<<  std::endl;
    else
        std::cout << "char: non displayable"<<  std::endl;
}

void Data::intPrinter(){
    if ((strcmp(rawstr, "-inf") != 0 && strcmp(rawstr, "inf") != 0 && strcmp(rawstr, "nan") != 0 
		&& strcmp(rawstr, "-inff") != 0 && strcmp(rawstr, "inff") != 0 && strcmp(rawstr, "nanf") != 0))
        std::cout << "int: " << this->_int <<std::endl;
    else
        std::cout << "int: " << " impossible" << std::endl;
}

void Data::floatPrinter(){
    if (_float || _float == 0.0f)
        std::cout << "float: " << this->_float << "f" << std::endl;
    else
        std::cout << "float: " << " impossible" << std::endl;
}

void Data::doublePrinter(){
    if (_double || _double == 0.0)
        std::cout << "double: " << this->_double << std::endl;
    else
        std::cout << "double: " << " impossible" << std::endl;
}

void Data::printer(){
    charPrinter();
    intPrinter();
    floatPrinter();
    doublePrinter();
}

void Data::decimalPrecision(){
	int i = 0;
	while (rawstr[i] != '.' && rawstr[i] != '\0')
		i++;
	if (rawstr[i] == '.')
		i++;
	while (rawstr[i] != '\0' && rawstr[i] != 'f'){
		this->_precision++;
		i++;
	}
		
}

void Data::processor(){
	this->decimalPrecision();
    if (this->intProcess() != -1){
        _int = atoi(rawstr);
        std::cout << std::fixed << std::setprecision(1) << _int << " is an int" << std::endl;
        _double = static_cast<double>(_int);
        _float = static_cast<float>(_int);
		if (_int <= 30 || _int >= 126)
			_oofchar = 1;
        _char = static_cast<char>(_int);
        
    }
    else if (this->doubleProcess() != -1){
        _double = strtod(rawstr, NULL);
        std::cout << std::fixed << std::setprecision(this->_precision) << _double << " is a double" << std::endl;
        _int = static_cast<int>(_double);
        _float = static_cast<double>(_double);
        _char = static_cast<char>(_double);
        
    }
    else if (this->floatProcess() != -1){
        _float = atof(rawstr);
        std::cout << std::fixed << std::setprecision(this->_precision) << std::fixed << _float << " is a float" << std::endl;
		_int = static_cast<int>(_float);
        _double = static_cast<double>(_float);
        _char = static_cast<char>(_float);
        
    }
    else if (this->charProcess() != -1){
        _char = rawstr[0];
        std::cout << _char << " is a char" << std::endl;
        _int = static_cast<int>(_char);
        _double = static_cast<double>(_char);
        _float = static_cast<float>(_char);
    }
    else{
        std::cout << "Error: Wrong input" << std::endl;
        return ;
    }
    printer();
    return ;
}

int Data::doubleProcess(){
    int i = 0;
    if (strcmp(rawstr, "-inf") == 0 || strcmp(rawstr, "inf") == 0 || strcmp(rawstr, "nan") == 0)
        return(0);
    while (rawstr[i] != '\0'){
        if (isdigit(rawstr[i]) != 0 || rawstr[i] == '.' || rawstr[i] == '-')
            i++;
        else
            return(-1);
    }
    return(0);
}

int Data::floatProcess(){
    if (strcmp(rawstr, "-inff") == 0 || strcmp(rawstr, "inff") == 0 || strcmp(rawstr, "nanf") == 0)
        return(0);
    int i = 0;
    while (rawstr[i] != '\0'){
        if (isdigit(rawstr[i]) != 0 || rawstr[i] == '.' || rawstr[i] == 'f' || rawstr[i] == '-')
            i++;
        else
            return(-1);
    }
    return(0);
}

int Data::intProcess(){
    int i = 0;
    while (rawstr[i] != '\0'){
        if ((rawstr[i] < '0' || rawstr[i] > '9') && rawstr[i] != '-')
            return(-1);
        i++;
    }
        _char = static_cast<char>(_int);
        _float = static_cast<float>(_int);
        _double = static_cast<double>(_int);
    return(0);
}

int Data::charProcess(){
    if ((isalpha(rawstr[0]) != 0 && isdigit(rawstr[0]) == 0) && rawstr[1] == '\0'){
        return(0);
    }
        
    return(-1);
}

Data::Data(char *argv) :rawstr(argv), _int(0), _char(0), _double(0.0), _float(0.0f), _precision(0)
{
    std::cout << "Data constructor called" << std::endl;
}

Data::Data(){
    std::cout << "Default Data constructor called" << std::endl;
}

Data::~Data()
{
    std::cout << "Data destructor called" << std::endl;
}
