/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrochet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/20 19:28:55 by mrochet           #+#    #+#             */
/*   Updated: 2022/06/21 02:52:07 by mrochet          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <string>
#include <iostream>

class ClapTrap
{	
	
	public:
		ClapTrap(void);
		ClapTrap(std::string name);
        ~ClapTrap(void);

		ClapTrap(ClapTrap const &ClapTrap_copy);
		ClapTrap &operator=(ClapTrap const &ClapTrap_copy);
		
		std::string get_name(void) const;
		int get_hit_points(void) const;
		int get_energy_points(void) const;
		int get_attack_damage(void) const;
		
		void set_name(std::string arg);
		void set_hit_points(int i);
		void set_energy_points(int i);
		void set_attack_damage(int i);

		virtual void attack(const std::string& target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
	
	protected :
		std::string _name;
		int _hit_points;
		int _energy_points;
		int _attack_damage;

};
