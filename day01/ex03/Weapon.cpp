/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrochet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/25 22:41:56 by mrochet           #+#    #+#             */
/*   Updated: 2022/06/14 14:39:45 by mrochet          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon()
{
	this->setType("NO_WEAPON");
	return;
}

Weapon::Weapon(std::string type)
{
	this->setType(type);
	return;
}

void Weapon::setType(std::string type)
{
	this->_type = type;
	return;
}

std::string Weapon::get_ref_type()
{
	std::string& typeREF = this->_type;
	return(typeREF);
}

Weapon::~Weapon()
{
	return;
}
