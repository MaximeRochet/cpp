/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FlagTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrochet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/21 01:50:03 by mrochet           #+#    #+#             */
/*   Updated: 2022/06/21 03:22:18 by mrochet          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "FlagTrap.hpp"

FlagTrap::FlagTrap(): ClapTrap()
{
	this->set_hit_points(100);
	this->set_energy_points(100);
	this->set_attack_damage(50);
	std::cout << "(FG) " << this->get_name() << " was born" << std::endl;
}

FlagTrap::FlagTrap(std::string name): ClapTrap(name)
{
	this->set_hit_points(100);
	this->set_energy_points(100);
	this->set_attack_damage(50);
	std::cout << "(FG) " << this->get_name() << " was born" << std::endl;
}

FlagTrap::FlagTrap(FlagTrap const &st)
{
	*this = st;
}

FlagTrap::~FlagTrap()
{
	std::cout << "(FG) " << _name << " Die" << std::endl;
}

FlagTrap &FlagTrap::operator=(FlagTrap const &st)
{
	this->_name = st._name;
	this->_hit_points = st._hit_points;
	this->_energy_points = st._energy_points;
	this->_attack_damage = st._attack_damage;

	return *this;
}

void FlagTrap::highFivesGuys()
{
    std::cout << "(FG) " << this->get_name() << " want high five !"<< std::endl;
}

