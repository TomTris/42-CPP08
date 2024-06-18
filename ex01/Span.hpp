/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qdo <qdo@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/17 17:55:57 by qdo               #+#    #+#             */
/*   Updated: 2024/06/18 07:12:49 by qdo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

#include <vector>
#include <iostream>
#include <exception>
#include <algorithm>

class Span {
private:
	unsigned int		N;
	std::vector<int> 	_vec;
	Span();
	
public:
	~Span();
	Span(unsigned int const & n);
	Span(Span const & src);
	Span & operator=(Span const & src);
	class MaxN : std::exception{
		public:
		const char *what() const throw();	
	};
	class TooShort : std::exception{
		public:
		const char *what() const throw();	
	};
	void				addNumber(int to_add);
	void				addNumberImproved(int *to_add, unsigned int n);
	unsigned int		shortestSpan(void);
	unsigned int		longestSpan(void);
};

#endif
