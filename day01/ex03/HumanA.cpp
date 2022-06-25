/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrochet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/25 23:37:00 by mrochet           #+#    #+#             */
/*   Updated: 2022/06/14 14:55:15 by mrochet          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon& weapon): _name(name), _weapon_type(weapon)
{
	return ;
}

void HumanA::attack()
{
	std::cout << this->_name << " attacks with their " << this->_weapon_type.get_ref_type() << std::endl;
}

HumanA::~HumanA()
{
	return ;
}
