/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrochet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/20 16:26:32 by mrochet           #+#    #+#             */
/*   Updated: 2022/06/20 18:33:03 by mrochet          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(void)
{
	this->_fixed_point = 0;
	return ;
}

Fixed::Fixed(const int arg)
{
	this->_fixed_point = arg << this->_raw;
	return ;
}

Fixed::Fixed(const float arg)
{
	this->_fixed_point = roundf(arg * (1 << this->_raw));
	return ;
}

Fixed::~Fixed(void){return ;};

Fixed::Fixed(Fixed const &fixed_copy)
{
	*this = fixed_copy;
	return ;
}

int	Fixed::toInt(void) const
{
	return ((int)(this->_fixed_point >> this->_raw));
}

float	Fixed::toFloat(void) const
{
	return ((float)(this->_fixed_point) / (1 << this->_raw));
}

int	Fixed::getFixedPoint(void) const
{
	return this->_fixed_point;
}

int	Fixed::getRawBits(void) const
{
	return this->_raw;
}

Fixed& Fixed::operator=(Fixed const &fixed_copy)
{
	this->_fixed_point = fixed_copy.getFixedPoint();
	return *this;
}

Fixed& Fixed::operator++(void)
{
	this->_fixed_point++;
	return *this;
}

Fixed& Fixed::operator--(void)
{
	this->_fixed_point--;
	return *this;
}

Fixed Fixed::operator++(int)
{
	Fixed tmp(*this);
	this->_fixed_point++;
	return tmp;
}

Fixed Fixed::operator--(int)
{
	Fixed tmp(*this);
	this->_fixed_point--;
	return tmp;
}

bool Fixed::operator>(const Fixed &copy) const
{
	return(this->_fixed_point > copy.getFixedPoint());
}

bool Fixed::operator<(const Fixed &copy) const
{
	return(this->_fixed_point < copy.getFixedPoint());
}

bool Fixed::operator>=(const Fixed &copy) const
{
	return(this->_fixed_point >= copy.getFixedPoint());
}

bool Fixed::operator<=(const Fixed &copy) const
{
	return(this->_fixed_point <= copy.getFixedPoint());
}

bool Fixed::operator==(const Fixed &copy) const 
{
	return(this->_fixed_point == copy.getFixedPoint());
}

bool Fixed::operator!=(const Fixed &copy) const
{
	return(this->_fixed_point != copy.getFixedPoint());
}

Fixed Fixed::operator+(const Fixed &fixed_copy) const
{
	return (this->toFloat() + fixed_copy.toFloat());
}

Fixed Fixed::operator-(const Fixed &fixed_copy) const
{
	return (this->toFloat() - fixed_copy.toFloat());
}

Fixed Fixed::operator*(const Fixed &fixed_copy) const
{
	return (this->toFloat() * fixed_copy.toFloat());
}

Fixed Fixed::operator/(const Fixed &fixed_copy) const
{
	return (this->toFloat() / fixed_copy.toFloat());
}

Fixed &Fixed::min(Fixed &a, Fixed &b)
{
	if (a < b)
		return (a);
	return (b);
}

const Fixed &Fixed::min(const Fixed &a, const Fixed &b)
{
	if (a < b)
		return (a);
	return (b);
}

Fixed &Fixed::max(Fixed &a, Fixed &b)
{
	if (a > b)
		return (a);
	return (b);
}

const Fixed &Fixed::max(const Fixed &a, const Fixed &b)
{
	if (a > b)
		return (a);
	return (b);
}

std::ostream &operator<<(std::ostream &out, Fixed const &fixed)
{
	out << fixed.toFloat();
	return out;
}
