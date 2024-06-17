/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qdo <qdo@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/17 17:55:57 by qdo               #+#    #+#             */
/*   Updated: 2024/06/17 20:14:14 by qdo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

#include <vector>
#include <iostream>

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
	void	addNumber(int to_add);
	void	addNumberImproved(int *to_add, unsigned int n);
	int		shortestSpan(void);
	int		longestSpan(void);
};

#endif
