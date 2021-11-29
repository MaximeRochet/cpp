/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrochet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/25 23:30:44 by mrochet           #+#    #+#             */
/*   Updated: 2021/11/26 16:50:22 by mrochet          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_H
#define HUMANB_H

#include "Weapon.hpp"

class HumanB{
	public:
		HumanB(std::string);
		~HumanB(void);

		void attack(void);
		void setWeapon(Weapon&);

	private:
		Weapon *_weapon_type;
		std::string _name;
};
#endif
