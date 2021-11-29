/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrochet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/25 23:37:00 by mrochet           #+#    #+#             */
/*   Updated: 2021/11/26 17:20:36 by mrochet          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name): _name(name)
{
	return ;
}

void HumanB::setWeapon(Weapon &weapon)
{
	this->_weapon_type = &weapon;
	return;
}

void HumanB::attack()
{
	if(this->_weapon_type)
	std::cout << this->_name << " attacks with his " << this->_weapon_type->get_ref_type() << std::endl;
}

HumanB::~HumanB()
{
	return ;
}
