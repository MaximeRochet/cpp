/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrochet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/27 18:09:19 by mrochet           #+#    #+#             */
/*   Updated: 2022/06/28 12:17:46 by mrochet          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "form.hpp"

class PresidentialPardonForm: public Form
{
	public :

		virtual void executeForm(Bureaucrat const &b) const;

		PresidentialPardonForm(std::string const target);
		PresidentialPardonForm(PresidentialPardonForm const &copy);
		PresidentialPardonForm();
		virtual ~PresidentialPardonForm();
};

