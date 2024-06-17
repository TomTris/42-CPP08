#include <iostream>
#include "Span.hpp"
#include <ctime>
#include <cstdlib>

int main()
{
	{
		try{
			Span sp = Span(5);
			sp.addNumber(6);
			sp.addNumber(3);
			sp.addNumber(17);
			sp.addNumber(9);
			sp.addNumber(11);
			std::cout << sp.shortestSpan() << std::endl;
			std::cout << sp.longestSpan() << std::endl;
		}
		catch (const Span::MaxN &e){std::cerr << e.what() << std::endl;}
		catch (const Span::TooShort &e){std::cerr << e.what() << std::endl;}
	}
	std::cout << "------------------------- " << std::endl;
	{
		int ele_nbr = 8000;
		std::srand(std::time(NULL));
		try {
			Span sp(ele_nbr);
			int	a[ele_nbr];
			
			int i = 0;
			while (i < ele_nbr)
			{
				a[i] = std::rand();
				i++;
			}
			sp.addNumberImproved(a, ele_nbr);
			std::cout << sp.shortestSpan() << std::endl;
			std::cout << sp.longestSpan() << std::endl;
		}
		catch (const Span::MaxN &e){std::cerr << e.what() << std::endl;}
		catch (const Span::TooShort &e){std::cerr << e.what() << std::endl;}
	}
	std::cout << "------------------------- " << std::endl;
	{
		try{
			Span sp = Span(5);
			sp.addNumber(6);
			sp.addNumber(3);
			sp.addNumber(17);
			sp.addNumber(9);
			sp.addNumber(11);
			sp.addNumber(11);
			std::cout << sp.shortestSpan() << std::endl;
			std::cout << sp.longestSpan() << std::endl;
		}
		catch (const Span::MaxN &e){std::cerr << e.what() << std::endl;}
		catch (const Span::TooShort &e){std::cerr << e.what() << std::endl;}
	}
	return 0;
}