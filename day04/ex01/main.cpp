/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrochet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/22 16:59:22 by mrochet           #+#    #+#             */
/*   Updated: 2022/06/25 01:21:52 by mrochet          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "animal.hpp"
#include "cat.hpp"
#include "dog.hpp"

int	main(void)
{

	Cat lol("lol");
	Cat test(lol);
	std::cout << std::endl;
	
	Animal *tab[10];

	for (int i = 0; i < 10; i++)
	{
		if (i & 1)
			tab[i] = new Dog();
		else
			tab[i] = new Cat();
	}

	for (int i = 0; i < 10; i++)
	{
		delete tab[i];
	}
	

	return 0;
}
