/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrochet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/16 17:00:46 by mrochet           #+#    #+#             */
/*   Updated: 2022/06/16 19:11:59 by mrochet          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int	main(int ac, char **av)
{
	Harl harl;
	std::string	mssg[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	int i = 0;

	if(ac == 2)
	{
		std::string currentmssg = av[1];

		while (i < 4 && currentmssg.compare(mssg[i]))
			i++;
		switch (i)
		{
			case 0: harl.complain("DEBUG");
			case 1: harl.complain("INFO");
			case 2: harl.complain("WARNING");
			case 3: harl.complain("ERROR");
					break;
			default: std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
		}
	}
	else
		std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
}
