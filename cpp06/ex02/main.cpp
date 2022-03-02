#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#include "Base.hpp"

Base *generate (){
	srand(time(NULL));
	int dice = std::rand () % 3;
	std::cout << "object type ";
	if (dice == 0){
		std::cout << "A created.";
		return (new A);
	}
	if (dice == 1){
		std::cout << "B created.";
		return(new B);
	}
	if (dice == 2){
		std::cout << "C created.";
		return (new C);
	}
	return 0;
}

void identify(Base *p){

	if (dynamic_cast<A *>(p) != NULL)
		std::cout << "A" << std::endl;
	if (dynamic_cast<B *>(p) != NULL)
		std::cout << "B" << std::endl;
	if (dynamic_cast<C *>(p) != NULL)
		std::cout << "C" << std::endl;
	return;
}


void identify(Base &p){
	(void)dynamic_cast<A &>(p);
	(void)dynamic_cast<B &>(p);
	(void)dynamic_cast<C &>(p);
}

int main (void){

	Base *base = generate();
	identify(base);
	identify(*base);
}