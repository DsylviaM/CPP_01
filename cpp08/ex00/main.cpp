#include "easyfind.hpp"
#include <vector>
#include <list>
#include <deque>


int main()
{
	std::vector<int> vec;
	std::list<int> lst;
	std::deque<int> deq;

	for (int i = 0; i < 5; i++)
	{
		vec.push_back(i);
		lst.push_back(i);
		deq.push_back(i);
	}

	easyfind(vec, 4) = 10;
	easyfind(lst, 2) = -3;
	
	std::cout << "vector:\t";
	easyprint(vec);

	std::cout << "list:\t";
	easyprint(lst);

	std::cout << "deque:\t";
	easyprint(deq);

	try { easyfind(vec, 5) = 1;}
	catch (std::exception &e) { std::cerr << e.what() << std::endl;}


	return 0;
}
