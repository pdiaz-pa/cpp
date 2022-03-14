#include "Karen.hpp"

int main ( void ){
    Karen karen;

    karen.complain("ERROR");
    karen.complain("DEBUG");
    karen.complain("INFO");
    karen.complain("WARNING");
    karen.complain("ERROR");
    karen.complain("ERROR");
    karen.complain("ERROR");
    karen.complain("WARNING");
    karen.complain("INFO");
    karen.complain("DEBUG");
    karen.complain("noexiste");
    karen.complain("noexiste");
    karen.complain("noexiste");
    return (0);
}