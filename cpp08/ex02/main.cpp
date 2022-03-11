#include "MutantStack.hpp"
#include <list>


int	main(void)
{
	std::cout << "-----MUTANT STACK TEST-----" << std::endl;
	std::list<int> mylist;
	MutantStack<int> mstack;

    mstack.push(5);

	MutantStack<int> equal;
	equal = mstack;
	std::cout << "equal top-->" << equal.top() << std::endl;
	std::cout << "mstack top-->" << mstack.top() << std::endl;
	MutantStack<int>::iterator itequal = equal.begin();
	itequal++;
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
	}

	std::cout << "----LIST TEST----" <<std::endl;
	mylist.push_back(7);
	mylist.push_back(67);
	mylist.push_back(22);
	mylist.push_back(43);

	
	std::list<int>::iterator it1 = mylist.begin();
	++it;
	std::list<int>::iterator ite1 = mylist.end();
	--it;
	
	while (it1 != ite1)
	{
		std::cout << *it1 << std::endl;
		++it1;
	}


	return (0);
}
