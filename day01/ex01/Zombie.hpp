/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrochet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 14:45:50 by mrochet           #+#    #+#             */
/*   Updated: 2022/06/14 14:26:29 by mrochet          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_H
# define ZOMBIE_H

#include<iostream>

class Zombie
{
	public:
		Zombie();
		Zombie(std::string str);
		
		void set_name(std::string name);
		std::string get_name(void);

		void announce(void); 
		~Zombie(void);

	private:
		std::string _name;
};

Zombie* newZombie(std::string name);
void randomChump(std::string name);

Zombie* zombieHorde(int n, std::string);
#endif


