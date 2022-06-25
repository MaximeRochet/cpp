/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrochet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/17 19:27:32 by mrochet           #+#    #+#             */
/*   Updated: 2022/06/20 18:28:19 by mrochet          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>
#include <cmath>

class Fixed
{
	public :
		Fixed();
		Fixed(const int);
		Fixed(const float);
		Fixed(Fixed const &);
		~Fixed();

		Fixed &operator=(Fixed const &);
		Fixed &operator++(void);
		Fixed &operator--(void);
		Fixed operator++(int);
		Fixed operator--(int);

		Fixed operator+(Fixed const &) const;
		Fixed operator-(Fixed const &) const;
		Fixed operator*(Fixed const &) const;
		Fixed operator/(Fixed const &)	const;

		bool operator>(Fixed const &) const;
		bool operator<(Fixed const &) const;
		bool operator>=(Fixed const &) const;
		bool operator<=(Fixed const &) const;
		bool operator==(Fixed const &) const;
		bool operator!=(Fixed const &) const;
	
		static Fixed &max(Fixed&, Fixed&);	
		static Fixed &min(Fixed&, Fixed&);	
		const static Fixed &min(const Fixed&,const Fixed&);	
		const static Fixed &max(const Fixed&, const Fixed&);	
		
		int		getRawBits(void) const;
		int		getFixedPoint(void) const;
		void	setRawBits(int const);

		int		toInt( void ) const;
		float	toFloat( void ) const;

	private :
		int		_fixed_point;
		static int const _raw = 8;
};

std::ostream &operator<<(std::ostream &out, Fixed const &fixed);
