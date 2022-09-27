/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrochet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/01 18:16:42 by mrochet           #+#    #+#             */
/*   Updated: 2022/07/01 19:06:38 by mrochet          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */
#include "span.hpp"

int main(void)
{
	try
	{
		Span a(5);

		a.addNumber(4);
		a.addNumber(25);
		a.addNumber(2);
		a.addNumber(19);
		a.addNumber(-5);
		//a.addNumber(-5);

		std::cout << a.shortestSpan() << std::endl;
		std::cout << a.longestSpan() << std::endl;
	}
	catch (const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	return 0;
}
