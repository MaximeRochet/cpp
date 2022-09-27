/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   array.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrochet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/01 02:45:21 by mrochet           #+#    #+#             */
/*   Updated: 2022/07/01 03:02:49 by mrochet          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <stdexcept>

template <class T>
class Array
{
	public : 
		Array()
		{
			_size = 0;
			_tab = new T[_size];
		}

		Array(const int &n)
		{
			_size = n;
			_tab = new T[_size];
		}

		Array(const Array &a)
		{
			_size= a._size;
			_tab = new T[_size];
			for(int i = 0; i < _size; i++)
				_tab[i] = a._tab[i];
		}

		~Array()
		{
			delete [] _tab;
		}

		T	&operator=(const T &rhs)
		{
			if (this != &rhs)
			{
				delete [] _tab;
				_size = rhs._size;
				_tab = new T[_size];
				for (unsigned int i = 0; i < _size; i++)
					_tab[i] = rhs._tab[i];
			}
			return (*this);
		}

		T	&operator[](const int &i) const
		{
			if (i < 0 || _size == 0 || i > _size)
				throw (std::out_of_range("index is out of range"));
			return (_tab[i]);
		}

		int &size(void)
		{
			return (_size);
		}

		
	private :
		int _size;
		T *_tab;
};
