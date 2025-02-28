/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: EktinOpUrims <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/24 12:38:21 by EktinOpUrims      #+#    #+#             */
/*   Updated: 2025/02/28 16:19:50 by EktinOpUrims     ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

# include <iostream>

// option 1, see below for other, equivalent(?) option 2
template <typename T, typename U>
void	iter(T * ptr, long unsigned int size, U funptr)
{
	if (NULL == ptr || 0 == size)
		return ;
	for (unsigned int i = 0; i < size; ++i)
	{
		try
		{
			funptr(ptr[i]);
		}
		catch (std::exception & e)
		{
			std::cout << e.what() << std::endl;	
		}
	}
}

// option 2
/*template <typename T, typename U>
void	iter(T * ptr, long unsigned int size, U (*funptr)(T & t))
{
	if (NULL == ptr || 0 == size)
		return ;
	for (unsigned int i = 0; i < size; ++i)
	{
		try
		{
			funptr(ptr[i]);
		}
		catch (std::exception & e)
		{
			std::cout << e.what() << std::endl;	
		}
	}
}

template <typename T, typename U>
void	iter(T * ptr, long unsigned int size, U (*funptr)(T const & t))
{
	if (NULL == ptr || 0 == size)
		return ;
	for (unsigned int i = 0; i < size; ++i)
	{
		try
		{
			funptr(ptr[i]);
		}
		catch (std::exception & e)
		{
			std::cout << e.what() << std::endl;	
		}
	}
}*/

template <typename T>
void	my_fun(T & t)
{
	std::cout << "General call for my_fun " 
		<< t << std::endl;
}

template <>
void	my_fun<int>(int & n)
{
	std::cout << "Call for my_fun<int> " << n << std::endl;
}

#endif //ITER_HPP
