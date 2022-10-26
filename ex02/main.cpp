#include "mutantStack.hpp"
#include <list>

int main()
{
	std::list<int> mstack;


	mstack.push_back(5);
//	mstack.push_back(17);
//	std::cout << mstack.top() << std::endl;
//	mstack.pop();
	std::cout << mstack.size() << std::endl << std::endl;
	mstack.push_back(3);
	mstack.push_back(5);
	mstack.push_back(737);
	//	//[...]
	mstack.push_back(0);
//	MutantStack<int>::iterator it = mstack.begin();
//	MutantStack<int>::iterator ite = mstack.end();
	std::list<int>::iterator it = mstack.begin();
	std::list<int>::iterator ite = mstack.end();
	++it;
	--it;
	while (it != ite)
	{
		std::cout << *it << std::endl;
		++it;
	}
//	std::stack<int> s(mstack);
	return 0;
}
