/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrochet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/27 18:26:17 by mrochet           #+#    #+#             */
/*   Updated: 2022/06/28 15:36:34 by mrochet          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "intern.hpp"
#include "bureaucrat.hpp"

int main(void)
{
	Intern intern;
	
	try
	{
		Form *form1 = intern.makeForm("presidential", "1");
		Form *form2 = intern.makeForm("robot", "2");
	
	 	std::cout << *form1 << std::endl;
		std::cout << *form2 << std::endl;

		Bureaucrat Bob("Bob", 1);
		Bob.signForm(*form1);
		Bob.executeForm(*form1);
		Bob.signForm(*form2);
		Bob.executeForm(*form2);
		delete form1;
		delete form2;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	return 0;
}
