/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrochet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 15:54:35 by mrochet           #+#    #+#             */
/*   Updated: 2021/11/25 21:19:53 by mrochet          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
	Zombie *horde;
	int N = 5;

	horde = zombieHorde(N, "Glen");
	while(--N > -1)
		horde[N].announce();


	delete [] horde;
	return(0);
}
