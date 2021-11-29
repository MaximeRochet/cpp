/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrochet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/25 23:30:44 by mrochet           #+#    #+#             */
/*   Updated: 2021/11/26 17:18:57 by mrochet          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_H
# define HUMANA_H

#include "Weapon.hpp"

class HumanA{
	public:
		HumanA(std::string, Weapon&);
		~HumanA(void);

		void attack(void);

	private:
		std::string _name;
		Weapon& _weapon_type;
};
#endif
