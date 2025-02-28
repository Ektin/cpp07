/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: EktinOpUrims <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/28 16:41:59 by EktinOpUrims      #+#    #+#             */
/*   Updated: 2025/02/28 16:54:11 by EktinOpUrims     ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.tpp.hpp"

template <typename T>
Array<T>::Array(): _arr(NULL), _length(0)
{
	T * ptr = new T();
	_elem = *ptr;
	delete ptr;
	ptr = NULL;
}

template <typename T>
Array<T>::Array(unsigned int length): 
			_arr(NULL),
			_length(0)
{
	T	*ptr = new T();
	_elem = *ptr;
	delete ptr;
	ptr = NULL;
	if ((int)length < 0)
	{
		std::cerr << "WARNING : negative size of array. Setting to 0" << std::endl;
		_length = 0;
		_arr = NULL;
		return ;
	}	
	if (0 == length)
	{
		delete [] _arr;
		_arr = NULL;
		return ;
	}
	_length = length;
	_arr = new T [_length];
	if (NULL == _arr)
	{
		std::cerr << "Failed to allocate " << std::endl;
		_length = 0;
		_arr = NULL;
		return ;
	}
	
	for (unsigned int i = 0; i < _length; ++i)
	{
		_arr[i] = _elem;
	}
}

template <typename T>
Array<T>::~Array<T>()
{
	delete [] _arr;
	_arr = NULL;
	_length = 0;
}

template <typename T>
Array<T>::Array(Array<T> const & src): 
			_arr(NULL), _length(0)
{
	*this = src;
}

template <typename T>
Array<T> &	Array<T>::operator=(Array<T> const & src)
		{
			if (this != &src)
			{
				_elem = src._elem;
				delete [] this->_arr;	
				this->_length = src._length;
				this->_arr = new T[_length];	
				for (unsigned int i = 0; i < _length; ++i)
				{
					_arr[i] = src._arr[i];
				}
			}
			return (*this);
		}

template <typename T>
unsigned int	Array<T>::size() const
{
	return (_length);
}

template <typename T>
T &	Array<T>::operator[](int i)
{
	if (i < 0 || ((unsigned int)i >= _length))
	{
		throw std::invalid_argument("ERROR : Index out of range");
		return (_elem);
	}
	return (_arr[i]);
}
