#include <string>
#include <iostream>

class Data
{
private:
    int _int;
    char _char;
    double _double;
    float _float;
public:
    void charPrinter();
    void intPrinter();
    void doublePrinter();
    void floatPrinter();
    void printer();
    void processor(std::string rawstr);
    int intProcess(std::string rawstr);
    int charProcess(std::string rawstr);
    int doubleProcess(std::string rawstr);
    int floatProcess(std::string rawstr);
    Data(std::string rawstr);
    Data();
    ~Data();
};

