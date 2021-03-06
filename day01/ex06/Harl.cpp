/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrochet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/16 16:52:22 by mrochet           #+#    #+#             */
/*   Updated: 2022/06/16 19:06:19 by mrochet          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl(void)
{
	this->_tab[0] = &Harl::_debug;
	this->_tab[1] = &Harl::_info;
	this->_tab[2] = &Harl::_warning;
	this->_tab[3] = &Harl::_error;
}

Harl::~Harl(void)
{
}

void	Harl::_debug(void)
{
	std::cout <<  "I love to get extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I just love it!" << std::endl;
}

void	Harl::_info(void)
{
	std::cout <<  "I cannot believe adding extra bacon cost more money. You don’t put enough! If you did I would not have to ask for it!" << std::endl;
}

void	Harl::_warning(void)
{
	std::cout <<  "I think I deserve to have some extra bacon for free. I’ve been coming here for years and you just started working here last month." << std::endl;
}

void	Harl::_error(void)
{
	std::cout <<  "This is unacceptable, I want to speak to the manager now." << std::endl;
}

void Harl::complain(std::string str)
{
	std::string mssg[4] = { "DEBUG", "INFO", "WARNING", "ERROR" };
	for (int i = 0; i < 4; i++)
	{
		switch (str.compare(mssg[i]))
		{
			case 0 : 
			{
				(this->*_tab[i])(); 
				i = 4;
			}
		}
	}
}
