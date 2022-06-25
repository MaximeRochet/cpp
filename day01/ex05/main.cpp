/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrochet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/16 17:00:46 by mrochet           #+#    #+#             */
/*   Updated: 2022/06/16 17:26:05 by mrochet          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int	main(int ac, char **av)
{
	Harl Harl;

	if(ac == 2)
		Harl.complain(av[1]);
	else
		std::cout<< "Please enter argument (DEBUG, INFO, WARNING or ERROR)"<<std::endl;	
}
