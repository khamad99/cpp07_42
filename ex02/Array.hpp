/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kalshaer <kalshaer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 11:56:19 by kalshaer          #+#    #+#             */
/*   Updated: 2023/12/25 11:48:29 by kalshaer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <iostream>
# include <limits>

template <typename T>
class Array
{
	private:
		T				*_arr;
		unsigned int	_len;
	public:
		Array();
		Array(unsigned int n);
		Array(Array const & src);
		~Array();
		Array & operator=(Array const & src);

		T & operator[](unsigned int i);
		unsigned int size() const;

		class OutOfRangeException : public std::exception
		{
			public:
				virtual const char * what() const throw()
				{
					return ("Out of range");
				}
		};
};

template <typename T>
Array<T>::Array() : _arr(new T[0]), _len(0) {}

template <typename T>
Array<T>::Array(unsigned int n) : _arr(new T[n]), _len(n) {}

template <typename T>
Array<T>::Array(Array const & src)
{
	this->_arr = new T[src._len];
	for (unsigned int i = 0; i < src._len; i++)
		this->_arr[i] = src._arr[i];
	this->_len = src._len;
}

template <typename T>
Array<T>::~Array()
{
	if (this->_arr)
		delete [] this->_arr;
}

template <typename T>
Array<T> & Array<T>::operator=(Array const & src)
{
	if (this != &src)
	{
		if (this->_arr)
			delete [] this->_arr;
		this->_arr = new T[src._len];
		for (unsigned int i = 0; i < src._len; i++)
			this->_arr[i] = src._arr[i];
		this->_len = src._len;
	}
	return (*this);
}

template <typename T>
T & Array<T>::operator[](unsigned int i)
{
	if (i >= this->_len || i < 0 
	|| this->_arr == NULL
	|| i > std::numeric_limits<unsigned int>::max())
		throw Array<T>::OutOfRangeException();
	return (this->_arr[i]);
}

template <typename T>
unsigned int Array<T>::size() const
{
	return (this->_len);
}

#endif