/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrochet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/17 19:27:32 by mrochet           #+#    #+#             */
/*   Updated: 2022/06/20 18:34:08 by mrochet          ###   ########lyon.fr   */
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
		~Fixed();

		Fixed(Fixed const &);
		Fixed &operator=(Fixed const &);

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
