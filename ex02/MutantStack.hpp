/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qdo <qdo@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/18 08:22:07 by qdo               #+#    #+#             */
/*   Updated: 2024/06/18 09:02:14 by qdo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	MUTANTSTACK_HPP
# define	MUTANTSTACK_HPP

# include <vector>
# include <algorithm>
# include <stack>
# include <deque>

template <typename T>
class MutantStack : std::stack<T, std::vector<T> > {

private:

public:
	MutantStack();
	~MutantStack();
	MutantStack(MutantStack const & src);
	MutantStack & operator=(MutantStack const & src);

	typedef typename std::vector<T>::iterator iterator;
	typedef typename std::vector<T>::const_iterator const_iterator;
	typedef typename std::vector<T>::reverse_iterator reverse_iterator;
	typedef typename std::vector<T>::const_reverse_iterator const_reverse_iterator;

	iterator begin();
	iterator end();
	const_iterator begin() const ;
	const_iterator end() const ;
};

#endif

template <typename T>
MutantStack<T>::~MutantStack() {}

template <typename T>
MutantStack<T>::MutantStack() {}

template <typename T>
MutantStack<T>::MutantStack(MutantStack const & src)
{
	*this = src;
}

template <typename T>
MutantStack<T> & MutantStack<T>::operator=(MutantStack const & src)
{
	*this = src;
}


template <typename T>
typename MutantStack<T>::iterator MutantStack<T>::begin() { return this->begin(); }

template <typename T>
typename MutantStack<T>::iterator MutantStack<T>::end() {return this->end(); }

template <typename T>
typename MutantStack<T>::const_iterator MutantStack<T>::begin() const {return this->begin(); }

template <typename T>
typename MutantStack<T>::const_iterator MutantStack<T>::end() const {return this->end(); }
