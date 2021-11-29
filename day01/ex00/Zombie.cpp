/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrochet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 14:54:16 by mrochet           #+#    #+#             */
/*   Updated: 2021/11/25 19:19:37 by mrochet          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie()
{
	this->_name = "No_name";
    std::cout << "<" << this->_name << "> is alive" << std::endl;
	return;
}


Zombie::Zombie(std::string str)
{
	this->_name = str;
    std::cout << "<" << this->_name << "> is alive" << std::endl;
	return;
}

Zombie::~Zombie()
{
    std::cout << "<" << this->_name << "> die" << std::endl;
    return ;
}

void Zombie::announce(void) const
{
	std::cout<<"<" <<this->_name<<"> BraiiiiiiinnnzzzZ"<<std::endl;
}
