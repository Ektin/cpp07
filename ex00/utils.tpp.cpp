/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.tpp.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: EktinOpUrims <marvin@42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/28 16:11:52 by EktinOpUrims      #+#    #+#             */
/*   Updated: 2025/02/28 16:23:17 by EktinOpUrims     ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <iostream>
# include "utils.tpp.hpp"

template <typename T>
void	swap(T &a, T &b)
{
	T	c;

	c = a;
	a = b;
	b = c;
}

template <typename T>
T &	min(T & a, T & b)
{
	return (a < b ? a : b);
}

template <typename T>
T &	max(T & a, T & b)
{
	return (a > b ? a : b);
}
