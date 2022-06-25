/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrochet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/20 20:35:26 by mrochet           #+#    #+#             */
/*   Updated: 2022/06/21 03:16:42 by mrochet          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main()
{
	
	ScavTrap st("Bob");

	st.attack("Jean");
	st.takeDamage(5);
	st.beRepaired(4);
	st.takeDamage(6);
	st.guardGate();
}
