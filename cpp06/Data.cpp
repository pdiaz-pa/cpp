#include "Data.hpp"
#include <iomanip>
void Data::Processor(std::string rawstr){
    if (this->IntProcess(rawstr) != -1){
        _int = stoi(rawstr);
        std::cout << _int << " is an int" << std::endl;
        return ;
    }
    else if (this->DoubleProcess(rawstr) != -1){
        _double = stod(rawstr);
        std::cout << std::setprecision(rawstr.size()) << _double << " is a double" << std::endl;
        return ;
    }
    else if (this->FloatProcess(rawstr) != -1){
        _float = stof(rawstr);
        std::cout << std::setprecision(rawstr.size()) << _float << " is a float" << std::endl;
        return ;
    }
    else if (this->CharProcess(rawstr) != -1){
        _char = rawstr[0];
        std::cout << _char << " is a char" << std::endl;
        return ;
    }
    else
        std::cout << "Error: Wrong input" << std::endl;
}

int Data::DoubleProcess(std::string rawstr){
    int i = 0;
    if (rawstr == "-inf" || rawstr == "inf" || rawstr == "nan")
        return(0);
    while (rawstr[i] != '\0'){
        if (isdigit(rawstr[i]) != 0 || (rawstr[i] == '.'))
            i++;
        else
            return(-1);
    }
    return(0);
}

int Data::FloatProcess(std::string rawstr){
    if (rawstr == "-inff" || rawstr == "inff" || rawstr == "nanf")
        return(0);
    int i = 0;
    while (rawstr[i] != '\0'){
        if (isdigit(rawstr[i]) != 0 || rawstr[i] == '.' || rawstr[i] == 'f')
            i++;
        else
            return(-1);
    }
    return(0);
}

int Data::IntProcess(std::string rawstr){
    int i = 0;
    while (rawstr[i] != '\0'){
        if ((rawstr[i] < '0' || rawstr[i] > '9') && rawstr[i] != '-')
            return(-1);
        i++;
    }
    
    return(0);
}

int Data::CharProcess(std::string rawstr){
    if ((isalpha(rawstr[0]) != 0 && isdigit(rawstr[0]) == 0) && rawstr[1] == '\0'){
        return(0);
    }
        
    return(-1);
}

Data::Data(std::string) : _int(0), _char ('0'), _double(0.0), _float(0.0f)
{
    std::cout << "Data constructor called" << std::endl;
}

Data::Data(){
    std::cout << "Default Data constructor called" << std::endl;
}

Data::~Data()
{
}
