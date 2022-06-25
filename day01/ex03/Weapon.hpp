/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrochet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/25 22:36:25 by mrochet           #+#    #+#             */
/*   Updated: 2022/06/14 14:36:34 by mrochet          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_H
# define WEAPON_H


#include <iostream>

class Weapon{
	public:
		Weapon(void);
		Weapon(std::string);
		~Weapon(void);

		std::string get_ref_type(void);
		void setType(std::string type);

	private:
		std::string _type;
};
#endif
