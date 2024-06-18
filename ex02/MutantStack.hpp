/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qdo <qdo@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/18 08:22:07 by qdo               #+#    #+#             */
/*   Updated: 2024/06/18 10:54:36 by qdo              ###   ########.fr       */
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

	~MutantStack();
	MutantStack() ;
	MutantStack(MutantStack const & src) ;
	MutantStack & operator=(MutantStack const & src) ;

	typedef typename std::stack<T>::container_type::iterator iterator;
	typedef typename std::stack<T>::container_type::const_iterator const_iterator;

	iterator begin();
	iterator end() ;

	const_iterator begin() const;
	const_iterator end() const;
};

#endif

// template <typename T>
// MutantStack<T>::~MutantStack() {}

template <typename T>
MutantStack<T>::~MutantStack() {}

template <typename T>
MutantStack<T>::MutantStack() {}

template <typename T>
MutantStack<T>::MutantStack(MutantStack const & src) { *this = src; }

template <typename T>
MutantStack<T> & MutantStack<T>::operator=(MutantStack const & src) { *this = src;}

template <typename T>
typename MutantStack<T>::iterator MutantStack<T>::begin() {return this->c.begin();}

template <typename T>
typename MutantStack<T>::iterator MutantStack<T>::end() {return this->c.end();}

template <typename T>
typename MutantStack<T>::const_iterator MutantStack<T>::begin() const {return this->c.begin();};

template <typename T>
typename MutantStack<T>::const_iterator MutantStack<T>::end() const {return this->c.begin();};