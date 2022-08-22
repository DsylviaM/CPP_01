#include "Span.hpp"

int main()
{
{
	Span sp = Span(5);

	sp.addNumber(6);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);

	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;
}
	std::cout << "___________________ " << std::endl;
{
	Span sp(10000);

	try { std::cout << sp.shortestSpan() << std::endl; }
	catch(std::exception & e){ std::cerr << e.what() << '\n'; }
	try { std::cout << sp.longestSpan() << std::endl; }
	catch(std::exception & e){ std::cerr << e.what() << '\n'; }
	sp.addNumber(1);
	sp.addNumber(2);
	sp.addNumber(3);

	try
	{
		sp.addRange(9997, -15);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
		exit(1);
	}

	try { std::cout << sp.shortestSpan() << std::endl; }
	catch(std::exception & e){ std::cerr << e.what() << '\n'; }
	try { std::cout << sp.longestSpan() << std::endl; }
	catch(std::exception & e){ std::cerr << e.what() << '\n'; }


}
	return 0;
}