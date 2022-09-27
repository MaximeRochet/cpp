/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrochet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/27 08:47:24 by mrochet           #+#    #+#             */
/*   Updated: 2022/06/27 16:54:58 by mrochet          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "bureaucrat.hpp"
#include "form.hpp"
int main(void)
{
	try
	{
		Bureaucrat Bob("Bob", 20);
		Bureaucrat Dylan("Dylan", 50);
		//Bureaucrat John("William", 200);
		//Bureaucrat William("William", -50);

		std::cout << Bob;
		std::cout << Dylan;
		std::cout << std::endl;

		Form form1("Form 1", 50, 50);
		std::cout << std::endl;
		std::cout << form1;
		std::cout << std::endl;

		Bob.signForm(form1);
		std::cout << std::endl;
		std::cout << form1;
		std::cout << std::endl;

		Bob.signForm(form1);

		Form form2("Form 2", 20, 20);
		std::cout << std::endl;
		std::cout << form2;
		std::cout << std::endl;

		Dylan.signForm(form2);
		std::cout << std::endl;
		std::cout << form2;
		std::cout << std::endl;
	}
	catch(std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
	return 0;
}
