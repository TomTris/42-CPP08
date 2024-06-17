/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qdo <qdo@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/17 19:19:47 by qdo               #+#    #+#             */
/*   Updated: 2024/06/17 20:14:07 by qdo              ###   ########.fr       */
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

int	Span::shortestSpan(void)
{
	if (_vec.size() <= 1)
		throw TooShort();
	unsigned int shortest_span = 4294967295;
	unsigned int span;
	std::vector<int>::const_iterator ite1 = _vec.begin();
	std::vector<int>::const_iterator ite2;
	while (ite1 != _vec.end() -1)
	{
		ite2 = ite1 + 1;
		while (ite2 != _vec.end())
		{
			if (*ite1 > *ite2)
				span = *ite1 - *ite2;
			else
				span = *ite2 - *ite1;
			if (span < shortest_span)
				shortest_span = span;
			ite2++;
		}
		ite1++;
	}
	return (shortest_span);
}

int	Span::longestSpan(void)
{
	if (_vec.size() <= 1)
		throw TooShort();
	unsigned int longest_span = 0;
	unsigned int span;
	std::vector<int>::const_iterator ite1 = _vec.begin();
	std::vector<int>::const_iterator ite2;
	while (ite1 != _vec.end() -1)
	{
		ite2 = ite1 + 1;
		while (ite2 != _vec.end())
		{
			if (*ite1 > *ite2)
				span = *ite1 - *ite2;
			else
				span = *ite2 - *ite1;
			if (span > longest_span)
				longest_span = span;
			ite2++;
		}
		ite1++;
	}
	return (longest_span);
}