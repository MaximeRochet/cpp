/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrochet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/21 00:37:45 by mrochet           #+#    #+#             */
/*   Updated: 2022/06/21 02:51:49 by mrochet          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap 
{
	public:
		ScavTrap();
		ScavTrap(std::string name);
		ScavTrap(ScavTrap const &ScavTrap_copy);
        ~ScavTrap(void);
		
		ScavTrap &operator=(ScavTrap const &ScavTrap_copy);
		
		void	guardGate();
		void	attack(std::string const &target);
};
