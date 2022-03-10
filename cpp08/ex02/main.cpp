#include "MutantStack.hpp"

int	main(void)
{
	MutantStack<int> mstack;
    mstack.push(5);

	mstack.push(17);
	std::cout << mstack.top() << std::endl;
	mstack.pop();
	std::cout << mstack.size() << std::endl;
	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	std::cout << mstack.size() << std::endl;
	mstack.push(0);
	std::cout << std::endl;
	/*
	MutantStack<int>::iterator it = mstack.begin();
	++it;
	MutantStack<int>::iterator ite = mstack.end();
	--it;
	
	while (it != ite)
	{
		std::cout << *it << std::endl;
		++it;
	}
	std::cout << std::endl;
	std::stack<int> s(mstack);
	while (s.size() > 0)
	{
		int tmp = s.top();
		s.pop();
		std::cout << tmp << std::endl;
	}*/
	return (0);
    
}