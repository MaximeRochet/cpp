/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrochet <mrochet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 14:54:16 by mrochet           #+#    #+#             */
/*   Updated: 2022/06/17 00:08:20 by mrochet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie()
{
 	Zombie::set_name("No_Name");
    std::cout << this->get_name() << " : is alive" << std::endl;
	return ;
}


Zombie::Zombie(const std::string& str)
{
	this->set_name(str);
    std::cout <<  this->get_name() << " : is alive" << std::endl;
	return ;
}

Zombie::~Zombie()
{
    std::cout << this->get_name() << " : die" << std::endl;
    return ;
}

void Zombie::announce(void)
{
	std::cout<< this->get_name() <<" : BraiiiiiiinnnzzzZ"<<std::endl;
}

void Zombie::set_name(const std::string& name)
{
	this->_name = name;
}

const std::string& Zombie::get_name() const
{
	return (this->_name);
}
