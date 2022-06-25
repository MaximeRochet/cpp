/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrochet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/20 19:59:01 by mrochet           #+#    #+#             */
/*   Updated: 2022/06/21 03:24:49 by mrochet          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void)
{
	this->_name = "No_Name";
	this->_hit_points = 10;
	this->_energy_points = 10;
	this->_attack_damage = 0;
	std::cout << this->_name << " was born" << std::endl;
	return ;
}

ClapTrap::ClapTrap(std::string name)
{
	this->_name = name;
	this->_hit_points = 10;
	this->_energy_points = 10;
	this->_attack_damage = 0;
	std::cout << this->_name << " was born" << std::endl;
	
	return ;
}

ClapTrap::ClapTrap(ClapTrap const &ClapTrap_copy)
{
	*this = ClapTrap_copy;

	return ;
}

ClapTrap::~ClapTrap(void)
{
	std::cout << this->_name<< " Die" << std::endl;
}

std::string ClapTrap::get_name(void) const
{
	return (this->_name);
}

void ClapTrap::set_name(std::string arg)
{
	this->_name = arg;
	return ;
}

int ClapTrap::get_hit_points(void) const
{
	return (this->_hit_points);
}

void ClapTrap::set_hit_points(int i)
{
	this->_hit_points = i;
	return ;
}

int ClapTrap::get_energy_points(void) const
{
	return (this->_energy_points);
}

void ClapTrap::set_energy_points(int i)
{
	this->_energy_points = i;
	return ;
}

int ClapTrap::get_attack_damage(void) const
{
	return (this->_attack_damage);
}

void ClapTrap::set_attack_damage(int i)
{
	this->_attack_damage = i;
	return ;
}

void	ClapTrap::attack(std::string const &target)
{
	if(!this->_hit_points)
		std::cout <<  this->_name << " is dead"  << std::endl;
	else if(!this->_energy_points)
		std::cout <<  this->_name << " hase no more energy"  << std::endl;
	else
	{
		std::cout << this->_name << " attack " << target << ", causing " << this->_attack_damage << " points of damage!" << std::endl;
		this->_energy_points--;
	}
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	if(!this->_hit_points)
		std::cout <<  this->_name << " is dead"  << std::endl;
	else if(!this->_energy_points)
		std::cout <<  this->_name << " hase no more energy"  << std::endl;
	else
	{
		std::cout << this->_name << " take " << amount << " points of damage!" << std::endl;
		this->_hit_points -=  amount;
		if(this->_hit_points < 0){this->_hit_points = 0;}
	}

}

void	ClapTrap::beRepaired(unsigned int amount)
{	
	if(!this->_hit_points)
		std::cout <<  this->_name << " is dead"  << std::endl;
	else if(!this->_energy_points)
		std::cout <<  this->_name << " hase no more energy"  << std::endl;
	else
	{
		std::cout << this->_name << " repaired " << amount << " points of energy!" << std::endl;
		this->_energy_points--;
		this->_hit_points += amount;
	}
}

ClapTrap& ClapTrap::operator=(ClapTrap const &ClapTrap_copy)
{
	this->_name = ClapTrap_copy.get_name();
	this->_hit_points = ClapTrap_copy.get_hit_points();
	this->_energy_points = ClapTrap_copy.get_energy_points();
	this->_attack_damage = ClapTrap_copy.get_attack_damage();
	return *this;
}

