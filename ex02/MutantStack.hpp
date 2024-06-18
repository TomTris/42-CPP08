/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qdo <qdo@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/18 08:22:07 by qdo               #+#    #+#             */
/*   Updated: 2024/06/18 10:24:43 by qdo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	MUTANTSTACK_HPP
# define	MUTANTSTACK_HPP

# include <vector>
# include <algorithm>
# include <stack>
# include <deque>

template <typename T>
class MutantStack : public std::stack<T> {

private:

public:
	~MutantStack() {};
	MutantStack() {};
	MutantStack(MutantStack const & src) { *this = src; }
	MutantStack & operator=(MutantStack const & src) { *this = src;}

	typedef typename std::stack<T>::container_type::iterator iterator;
	typedef typename std::stack<T>::container_type::const_iterator const_iterator;

	iterator begin() {return this->c.begin();}
	iterator end() {return this->c.end();}

	const_iterator begin() const {return this->c.begin();};
	const_iterator end() const {return this->c.begin();};
};

#endif
