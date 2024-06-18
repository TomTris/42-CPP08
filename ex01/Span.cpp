/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qdo <qdo@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/17 19:19:47 by qdo               #+#    #+#             */
/*   Updated: 2024/06/18 07:23:47 by qdo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Span.hpp"

Span::~Span() {}
Span::Span(unsigned int const & n) : N(n)
{
	std::cout << "New Span with maximum of " << n << " integers was born" << std::endl;
}

const char *Span::MaxN::what() const throw() {return ("The container overflowed");}
const char *Span::TooShort::what() const throw() {return ("The container, It has too little integers to calculate span");}

void	Span::addNumber(int to_add)
{
	if (_vec.size() >= N)
		throw MaxN();
	_vec.push_back(to_add);
}

void	Span::addNumberImproved(int *to_add, unsigned int n)
{
	if (static_cast<unsigned long>(N) < static_cast<unsigned long>(n) + static_cast<unsigned long>(_vec.size()))
		throw MaxN();
	_vec.insert(_vec.end(), to_add, to_add + n);
}

unsigned int	Span::shortestSpan(void)
{
	if (_vec.size() <= 1)
		throw TooShort();
	unsigned int shortest_span = 4294967295;
	unsigned int span;
	std::vector<int> sorted = _vec;
	std::sort(sorted.begin(), sorted.end());
	std::vector<int>::iterator ite = sorted.begin() + 1;
	while (ite != sorted.end())
	{
		span = *(ite) - *(ite - 1);
		if (span < shortest_span)
			shortest_span = span;
		ite++;
	}
	return (shortest_span);
}

unsigned int	Span::longestSpan(void)
{
	if (_vec.size() <= 1)
		throw TooShort();
	int	smallest = 2147483647;
	int	biggest = -2147483648;
	
	std::vector<int>::const_iterator ite1 = _vec.begin();
	while (ite1 != _vec.end())
	{
		if (*ite1 > biggest)
			biggest = *ite1;
		if (*ite1 < smallest)
			smallest = *ite1;
		ite1++;
	}
	return (biggest - smallest);
}