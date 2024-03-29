/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrochet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/27 18:09:46 by mrochet           #+#    #+#             */
/*   Updated: 2022/06/28 12:18:28 by mrochet          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"
#include <stdlib.h>
#include <time.h>

void RobotomyRequestForm::executeForm(Bureaucrat const &b) const
{
	int i;

	if (b.getGrade() > this->getGradeExec())
		throw Bureaucrat::GradeTooLowException();
	if (this->getSign() == false)
		throw Form::FormNotSigned();
	
	srand (time(NULL));
	i = std::rand();
	if (i % 2)
	{
		std::cout << "VVVVVVFFFFFFFZZZZZZZZVVVVVVVVVVFFFFFFFFZZZZZZZ" << std::endl;
		std::cout << "*bruits de perceuse*" << std::endl;
		std::cout << this->getTarget() << " has been robotomized" << std::endl;
	}
	else
		std::cout << this->getTarget() << " hasn't been robotomized" << std::endl;
	return ;
}

RobotomyRequestForm::RobotomyRequestForm(): Form("RobotomyRequestForm", 45, 72)
{
	this->setTarget("Default");
	return ;
}

RobotomyRequestForm::RobotomyRequestForm(std::string const target): Form("RobotomyRequestForm", 45, 72)
{
	this->setTarget(target);
	return ;
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const &copy): Form(copy)
{
	this->setTarget(copy.getTarget());
	return ;
}

RobotomyRequestForm::~RobotomyRequestForm()
{
	return ;
}
