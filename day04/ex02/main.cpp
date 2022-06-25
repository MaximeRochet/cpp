/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrochet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/22 16:59:22 by mrochet           #+#    #+#             */
/*   Updated: 2022/06/25 01:34:47 by mrochet          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "aanimal.hpp"
#include "cat.hpp"
#include "dog.hpp"

int	main(void)
{
//	Aanimal = new Cat();

	Aanimal *tab[10];

	for (int i = 0; i < 10; i++)
	{
		if (i % 2)
			tab[i] = new Dog();
		else
			tab[i] = new Cat();
	}

	for (int i = 0; i < 10; i++)
	{
		delete tab[i];
	}

	std::cout << std::endl;
	return 0;
}
