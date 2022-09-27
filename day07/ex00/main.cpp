/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrochet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/01 01:38:25 by mrochet           #+#    #+#             */
/*   Updated: 2022/07/01 01:39:44 by mrochet          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "whatever.hpp"
#include <iostream>
#include <string>

int main()
{
	{
		int a = 1;
		int b = 2;
		std::cout << "a = " << a << std::endl << "b = " << b << std::endl;
		swap(a, b);
		std::cout << "a = " << a << std::endl << "b = " << b << std::endl;
		std::cout << "min = " << min(a, b) << std::endl;
		std::cout << "max = " << max(a, b) << std::endl;
	}

	{
		float a = 1.2;
		float b = 2.54;
		std::cout << "a = " << a << std::endl << "b = " << b << std::endl;
		swap(a, b);
		std::cout << "a = " << a << std::endl << "b = " << b << std::endl;
		std::cout << "min = " << min(a, b) << std::endl;
		std::cout << "max = " << max(a, b) << std::endl;
	}
	{
		std::string a = "abc";
		std::string b = "def";
		std::cout << "a = " << a << std::endl << "b = " << b << std::endl;
		swap(a, b);
		std::cout << "a = " << a << std::endl << "b = " << b << std::endl;
		std::cout << "min = " << min(a, b) << std::endl;
		std::cout << "max = " << max(a, b) << std::endl;
	}
}
