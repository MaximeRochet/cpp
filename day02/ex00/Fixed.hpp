/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrochet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/17 19:27:32 by mrochet           #+#    #+#             */
/*   Updated: 2022/06/20 15:57:42 by mrochet          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>

class Fixed
{
	public :
		Fixed();
		Fixed(Fixed const &);
		~Fixed();

		Fixed &operator=(Fixed const &);

		int	getRawBits(void) const;
		void	setRawBits(int const raw);

	private :
		int _n;
		static int const _raw = 8;
};
