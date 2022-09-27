/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrochet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/28 10:01:23 by mrochet           #+#    #+#             */
/*   Updated: 2022/06/28 14:55:47 by mrochet          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "form.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

class Intern
{
	public:
		Intern();
		Intern(Intern const &);
		~Intern();

		Intern &operator=(Intern const &);

		Form *makeForm(const std::string &, const std::string &);

		class InvalidFormNameException : public std::exception
		{
			public:
				const char *what() const throw()
				{
					return ("Invalid Name Form");
				}
		};	

	private:
		static std::string _name[4];
		static Form *(Intern::*_fntab[3])(const std::string &);

		Form *shrubbery(const std::string &target);
		Form *robot(const std::string &target);
		Form *presidential(const std::string &target);
};	
