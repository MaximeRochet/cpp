/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrochet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 15:54:35 by mrochet           #+#    #+#             */
/*   Updated: 2021/11/25 19:27:11 by mrochet          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
	Zombie *zombie1 = newZombie("Rick");
	zombie1->announce();
	delete(zombie1);
	
	randomChump("Carl");

	Zombie zombie2;
	zombie2.announce();
	
	return(0);
}
