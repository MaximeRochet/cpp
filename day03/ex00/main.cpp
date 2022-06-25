/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrochet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/20 20:35:26 by mrochet           #+#    #+#             */
/*   Updated: 2022/06/21 00:20:37 by mrochet          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main()
{
	ClapTrap ct("Bob");

	ct.attack("Jean");
	ct.takeDamage(5);
	ct.beRepaired(4);
	ct.takeDamage(6);
}
