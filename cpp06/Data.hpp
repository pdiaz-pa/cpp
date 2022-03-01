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
    void Processor(std::string rawstr);
    int IntProcess(std::string rawstr);
    int CharProcess(std::string rawstr);
    int DoubleProcess(std::string rawstr);
    int FloatProcess(std::string rawstr);
    Data(std::string rawstr);
    Data();
    ~Data();
};

