/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FlagTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrochet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/21 00:37:45 by mrochet           #+#    #+#             */
/*   Updated: 2022/06/21 03:22:04 by mrochet          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "ClapTrap.hpp"

class FlagTrap : public ClapTrap 
{
	public:
		FlagTrap();
		FlagTrap(std::string name);
		FlagTrap(FlagTrap const &FlagTrap_copy);
        ~FlagTrap(void);
		
		FlagTrap &operator=(FlagTrap const &FlagTrap_copy);
		
		void	highFivesGuys();
};
