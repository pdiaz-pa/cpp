#pragma once 
#include <string>
#include "Bureucrat.hpp"

class Bureucrat;

class Form
{
private:
    const std::string name;
    bool signed;
    const int reqgrade;
    const int reqexec;
public:
    void beSigned(Bureucrat &bureucrat);
    Form(/* args */);
    ~Form();
};


