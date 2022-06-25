/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrochet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/25 23:30:44 by mrochet           #+#    #+#             */
/*   Updated: 2022/06/14 14:43:14 by mrochet          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
#define HUMANB_HPP

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
