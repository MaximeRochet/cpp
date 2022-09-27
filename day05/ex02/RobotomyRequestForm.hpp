/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrochet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/27 18:10:02 by mrochet           #+#    #+#             */
/*   Updated: 2022/06/28 12:18:17 by mrochet          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "form.hpp"

class RobotomyRequestForm: public Form
{
	public :

		virtual void executeForm(Bureaucrat const &b) const;

		RobotomyRequestForm(std::string const target);
		RobotomyRequestForm(RobotomyRequestForm const &copy);
		RobotomyRequestForm();
		virtual ~RobotomyRequestForm();
};
