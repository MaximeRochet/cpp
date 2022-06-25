/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrochet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/20 20:35:26 by mrochet           #+#    #+#             */
/*   Updated: 2022/06/21 03:29:01 by mrochet          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "FlagTrap.hpp"

int main()
{
	
	FlagTrap st("Bob");

	st.highFivesGuys();
	st.attack("Jean");
	st.takeDamage(1000);
	st.beRepaired(4);
	st.takeDamage(6);
}
