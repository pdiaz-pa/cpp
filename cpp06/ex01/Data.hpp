#include <string>
#include <iostream>

class Data
{
private:
	char *rawstr;
    int _int;
    char _char;
    double _double;
    float _float;
	int	_precision;
	bool _oofchar;
public:
	void decimalPrecision();
    void charPrinter();
    void intPrinter();
    void doublePrinter();
    void floatPrinter();
    void printer();
    void processor();
    int intProcess();
    int charProcess();
    int doubleProcess();
    int floatProcess();
    Data(char *rawstr);
    Data();
    ~Data();
};

