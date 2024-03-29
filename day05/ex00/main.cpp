/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrochet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/27 08:47:24 by mrochet           #+#    #+#             */
/*   Updated: 2022/06/27 11:35:17 by mrochet          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "bureaucrat.hpp"

int main()
{
	try
	{
		Bureaucrat bob("bob", 10);
		std::cout << bob;
		++bob;
		std::cout << bob;
		Bureaucrat fake("bob", 0);
	}
	catch(std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	return(0);
}
