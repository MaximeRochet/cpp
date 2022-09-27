/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrochet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/01 02:06:30 by mrochet           #+#    #+#             */
/*   Updated: 2022/07/01 15:21:37 by mrochet          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include "iter.hpp"
void	incr(int &i)
{
	i++;
}

void	app(std::string &s)
{
	s += "_after";
}

int main()
{
	{
		int tab[4] = {1, 2, 3, 4};
		std::cout << "before:" << std::endl;
		for (int i = 0; i < 4; i++)
			std::cout << "tab[" << i << "] = " << tab[i] << std::endl;
		iter(tab, 4, incr);
		std::cout << "after:" << std::endl;
		for (int i = 0; i < 4; i++)
			std::cout << "tab[" << i << "] = " << tab[i] << std::endl;
	}

	{
		std::string tab[4] = {"abc", "def", "ghi", "jkl"};
		std::cout << "before:" << std::endl;
		for (int i = 0; i < 4; i++)
			std::cout << "tab[" << i << "] = " << tab[i] << std::endl;
		iter(tab, 4, app);
		std::cout << "after:" << std::endl;
		for (int i = 0; i < 4; i++)
			std::cout << "tab[" << i << "] = " << tab[i] << std::endl;
	}
}
/*
void	ft_test(int const &a)
{
	std::cout << a << std::endl;
}

int main(void)
{
	int x[20];

	for (int i = 0; i < 20; i++)
	{
		x[i] = i;
	}
	::iter(x, 20, ft_test);
	return 0;


}*/
