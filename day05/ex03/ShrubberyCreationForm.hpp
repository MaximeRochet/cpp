/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrochet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/27 18:08:55 by mrochet           #+#    #+#             */
/*   Updated: 2022/06/28 12:17:30 by mrochet          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <fstream>
#include "form.hpp"

class ShrubberyCreationForm: public Form
{
	public :

		class ErrorFile : public std::exception
		{
			public :

				const char *what() const throw();
		};

		virtual void executeForm(Bureaucrat const &b) const;
		ShrubberyCreationForm(std::string const target);
		ShrubberyCreationForm(ShrubberyCreationForm const &copy);
		ShrubberyCreationForm();
		virtual ~ShrubberyCreationForm();
};
