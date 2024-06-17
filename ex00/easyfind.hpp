/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qdo <qdo@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/17 14:28:48 by qdo               #+#    #+#             */
/*   Updated: 2024/06/17 17:29:24 by qdo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

#include <algorithm>

class NotExist : std::exception
{
	public:

		const char *what() const throw ()
		{
			return ("Not exists");
		}
};

template <typename T>
void	easyFind(T const & src, int n)
{
	// std::vector<T> list = src;
	typename T::const_iterator iter = std::find(src.begin(), src.end(), n);
	if (iter != src.end())
	{
		std::cout << n << " is at index " << iter - src.begin()  << " of the list" << std::endl;
		return ;
	}
	throw NotExist();
}

#endif