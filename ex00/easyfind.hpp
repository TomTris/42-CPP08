/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qdo <qdo@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/17 14:28:48 by qdo               #+#    #+#             */
/*   Updated: 2024/06/17 20:16:33 by qdo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

#include <algorithm>
#include <exception>

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
	typename T::const_iterator iter = std::find(src.begin(), src.end(), n);
	if (iter != src.end())
	{
		std::cout << n << " is at index " << iter - src.begin()  << " of the list" << std::endl;
		return ;
	}
	throw NotExist();
}

#endif
