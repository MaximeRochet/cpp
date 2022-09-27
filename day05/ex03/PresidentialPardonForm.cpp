/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrochet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/27 18:09:11 by mrochet           #+#    #+#             */
/*   Updated: 2022/06/28 12:18:04 by mrochet          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

void PresidentialPardonForm::executeForm(Bureaucrat const &b) const
{
	if (b.getGrade() > this->getGradeExec())
		throw Bureaucrat::GradeTooLowException();
	if (this->getSign() == false)
		throw Form::FormNotSigned();
	std::cout << this->getTarget() << " has been pardoned by Zafod Beeblebrox." << std::endl;
	return ;
}

PresidentialPardonForm::PresidentialPardonForm(): Form("PresidentialPardonForm", 5, 25)
{
	this->setTarget("Default");
	return ;
}

PresidentialPardonForm::PresidentialPardonForm(std::string const target): Form("PresidentialPardonForm", 5, 25)
{
	this->setTarget(target);
	return ;
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const &copy): Form(copy)
{
	this->setTarget(copy.getTarget());
	return ;
}

PresidentialPardonForm::~PresidentialPardonForm()
{
	return ;
}
