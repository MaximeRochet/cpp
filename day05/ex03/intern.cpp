/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrochet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/28 10:26:11 by mrochet           #+#    #+#             */
/*   Updated: 2022/06/28 15:33:40 by mrochet          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "intern.hpp"

std::string Intern::_name[4] = {"shrubbery","robot","presidential","fin"};

Form *(Intern::*Intern::_fntab[3])(const std::string &) = {&Intern::shrubbery, &Intern::robot, &Intern::presidential};

Intern::Intern()
{
	return ;
}

Intern::~Intern()
{
	return ;
}

Form *Intern::shrubbery(const std::string &target)
{
	Form *form = new ShrubberyCreationForm(target);
	return (form);
}

Form *Intern::robot(const std::string &target)
{
	Form *form = new RobotomyRequestForm(target);
	return (form);
}

Form *Intern::presidential(const std::string &target)
{
	Form *form = new PresidentialPardonForm(target);
	return (form);
}

Form *Intern::makeForm(const std::string &form, const std::string &target)
{
	int i = 0;
	while(form.compare(_name[i]) && i < 4)
		i++;
	if( i < 3 )
	{
		std::cout << "Intern create " << form <<" form for " << target <<std::endl;
		return ((this->*_fntab[i])(target));
	}
	else
		throw (InvalidFormNameException());
}
