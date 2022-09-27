/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stand.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrochet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/01 18:18:09 by mrochet           #+#    #+#             */
/*   Updated: 2022/07/01 18:58:09 by mrochet          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <set>

class Span
{
	public :
		class Tab_full : public std::exception
		{
			const char *what() const throw()
			{
				return ("Error : Array is full");
			}
		};

		class Tab_Empty : public std::exception
		{
			const char *what() const throw()
			{
				return("Error : Not enough of number");
			}
		};
		Span();
		Span(unsigned int n);
		Span(Span const &copy);
		~Span();
		Span &operator=(Span const &copy);

		void addNumber(int);
		int shortestSpan() const;
		int longestSpan() const;

	private :
		unsigned int _n;
		std::set<int> _array;
};
