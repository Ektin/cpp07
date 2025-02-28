/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: EktinOpUrims <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/27 18:35:16 by EktinOpUrims      #+#    #+#             */
/*   Updated: 2025/02/28 16:54:02 by EktinOpUrims     ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <iostream>
# include <exception>

template <typename T>
class Array
{
	private:
		T		_elem;
		T *	 	_arr;
		unsigned int	_length;

	public:
		Array<T>();
		Array<T>(unsigned int length);
		virtual	~Array<T>();

		Array<T>(Array<T> const & src);
		Array<T> &	operator=(Array<T> const & src);
		unsigned int	size() const;

		T &	operator[](int i);
};

#endif // ARRAY_HPP
