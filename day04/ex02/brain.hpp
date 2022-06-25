/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrochet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/24 19:21:25 by mrochet           #+#    #+#             */
/*   Updated: 2022/06/24 19:41:22 by mrochet          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <string>
#include <iostream>

class Brain
{
	public :
		Brain();
		Brain(Brain const &);
		~Brain();
		Brain &operator=(Brain const &);
		
	protected :
		std::string ideas[100];
};
