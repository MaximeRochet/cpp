/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrochet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/21 01:50:03 by mrochet           #+#    #+#             */
/*   Updated: 2022/06/21 03:14:31 by mrochet          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(): ClapTrap()
{
	this->set_hit_points(100);
	this->set_energy_points(50);
	this->set_attack_damage(20);
	std::cout << "(ST) " << this->get_name() << " was born" << std::endl;
}

ScavTrap::ScavTrap(std::string name): ClapTrap(name)
{
	this->set_hit_points(100);
	this->set_energy_points(50);
	this->set_attack_damage(20);
	std::cout << "(ST) " << this->get_name() << " was born" << std::endl;
}

ScavTrap::ScavTrap(ScavTrap const &st)
{
	*this = st;
}

ScavTrap::~ScavTrap()
{
	std::cout << "(ST) " << _name << " Die" << std::endl;
}

ScavTrap &ScavTrap::operator=(ScavTrap const &st)
{
	this->_name = st._name;
	this->_hit_points = st._hit_points;
	this->_energy_points = st._energy_points;
	this->_attack_damage = st._attack_damage;

	return *this;
}

void ScavTrap::guardGate()
{
    std::cout << "(ST) " << this->get_name() << " is now in Gate keeper mode"<< std::endl;
}

void	ScavTrap::attack(std::string const &target)
{
	std::cout << "(ST) " << this->_name << " attack " << target << ", causing " << this->_attack_damage << " points of damage!" << std::endl;
}
