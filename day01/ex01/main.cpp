/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrochet <mrochet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 15:54:35 by mrochet           #+#    #+#             */
/*   Updated: 2022/06/17 00:12:39 by mrochet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
	Zombie *horde;
	int N = 5;

	horde = zombieHorde(N, "Glen");
	while(--N > -1)w
		horde[N].announce();


	delete [] horde;
	return(0);
}
