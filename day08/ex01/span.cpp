/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrochet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/01 18:31:40 by mrochet           #+#    #+#             */
/*   Updated: 2022/07/01 19:06:14 by mrochet          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "span.hpp"

Span::Span():_n(0){}

Span::Span(unsigned int n):_n(n){}


Span::Span(Span const &copy)
{
	this->_n = copy._n;
	this->_array = copy._array;	
}

Span::~Span(){}

Span &Span::operator=(Span const &copy)
{
	this->_array = copy._array;
	this->_n = copy._n;
	return (*this);
}

void Span::addNumber(int const a)
{
	if(this->_array.size() >= this->_n)
		throw Span::Tab_full();
	this->_array.insert(a);
}

int Span::shortestSpan() const
{
	if(this->_array.size() <= 1)
		throw Span::Tab_Empty();
	std::set<int>::const_iterator a = this->_array.begin();
	std::set<int>::const_iterator b = ++this->_array.begin();
	int min = *b - *a;
	while(b != this->_array.end())
	{
		int diff = *b - *a;
		if(diff < min)
			min = diff;
		a++;
		b++;
	}
	return (min);
}

int Span::longestSpan() const
{
	if(this->_array.size() <= 1)
		throw Span::Tab_Empty();
	std::set<int>::const_iterator a = this->_array.begin();
	std::set<int>::const_iterator b = ++this->_array.begin();
	int max = *a;
	while (b != this->_array.end())
	{
		a++;
		b++;
	}
	return(*a - max);
}

