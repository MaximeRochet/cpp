/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrochet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/27 18:26:17 by mrochet           #+#    #+#             */
/*   Updated: 2022/06/28 12:19:19 by mrochet          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

int main(void)
{
	try
	{

		Bureaucrat Bob("Bob", 20);
		Bureaucrat Dylan("Dylan", 50);

		PresidentialPardonForm PresidentialPardonForm;
		Bureaucrat President("President", 5);
		PresidentialPardonForm.beSigned(President);
		PresidentialPardonForm.executeForm(President);
		std::cout << std::endl;

		RobotomyRequestForm RobotomyRequestForm("PhillyFlingue");
		RobotomyRequestForm.beSigned(President);
		RobotomyRequestForm.executeForm(Bob);
		std::cout << std::endl;

		ShrubberyCreationForm ShrubberyCreationForm("MangeMort");
		ShrubberyCreationForm.beSigned(President);
		ShrubberyCreationForm.executeForm(Bob);

	}
	catch(std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
	return 0;
}
