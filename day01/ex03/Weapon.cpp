/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrochet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/25 22:41:56 by mrochet           #+#    #+#             */
/*   Updated: 2021/11/26 17:19:42 by mrochet          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon()
{
	this->_type = "NO_WEAPON";
	return;
}

Weapon::Weapon(std::string type)
{
	this->_type = type;
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
