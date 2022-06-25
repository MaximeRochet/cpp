/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrochet <mrochet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 14:45:50 by mrochet           #+#    #+#             */
/*   Updated: 2022/06/17 00:11:23 by mrochet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

// pragma once
// const if const
// reference if sizeof > 8

#include<iostream>

class Zombie
{
	public:
		Zombie();
		Zombie(const std::string& str);
		
		void set_name(const std::string& name);
		const std::string& get_name(void) const;

		void announce(void); 
		~Zombie(void);

	private:
		std::string _name;
};

Zombie* newZombie(const std::string& name);
void randomChump(const std::string& name);
