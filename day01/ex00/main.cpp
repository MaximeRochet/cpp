/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrochet <mrochet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 15:54:35 by mrochet           #+#    #+#             */
/*   Updated: 2022/06/17 00:09:20 by mrochet          ###   ########.fr       */
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
