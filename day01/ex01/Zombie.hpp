/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrochet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 14:45:50 by mrochet           #+#    #+#             */
/*   Updated: 2021/11/25 21:08:42 by mrochet          ###   ########lyon.fr   */
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
		void announce(void) const;
	   	void set_name(std::string str);	
		~Zombie(void);

	private:
		std::string _name;
};

Zombie* zombieHorde( int N, std::string name );

#endif


