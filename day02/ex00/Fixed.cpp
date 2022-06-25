/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrochet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/17 19:39:32 by mrochet           #+#    #+#             */
/*   Updated: 2022/06/20 15:40:11 by mrochet          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(void)
{
	this->_n = 0;
	std::cout << "Default constructor called" << std::endl;
	return ;
}

Fixed::~Fixed(void)
{
	std::cout << "Destructor called " << std::endl;
	return ;
}

int	Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return this->_n;
}

void	Fixed::setRawBits(int const raw)
{
	this->_n = raw;
}

Fixed::Fixed(Fixed const &copy)
{
	std::cout << "copy constructor called" << std::endl;
	*this = copy;
}

Fixed& Fixed::operator=(Fixed const &fixed_copy)
{
	std::cout << "Assignation opertator called" << std::endl;
	this->_n = fixed_copy.getRawBits();
	return *this;
}
