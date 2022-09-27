/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrochet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/27 12:11:47 by mrochet           #+#    #+#             */
/*   Updated: 2022/06/27 16:13:34 by mrochet          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */


#pragma once

#include <string>
#include <iostream>
#include "bureaucrat.hpp"

class Bureaucrat;

class Form
{
	public:
		class GradeTooHighException : public std::exception
		{
		public:
			const char *what() const throw();
		};

		class GradeTooLowException : public std::exception
		{
		public:
			const char *what() const throw();
		};

		Form();
		Form(std::string);
		Form(std::string, int, int);
		Form(Form const &);
		~Form();

		Form &operator=(Form const &);


		std::string getName() const;
		int getGradeSign() const;
		int getGradeExec() const;
		bool getSign() const;

		void setSign();

		void beSigned(Bureaucrat const &);
	
	private:
		std::string _name;
		bool _sign;
		const int _grade_sign;
		const int _grade_exec;

};

std::ostream &operator<<(std::ostream &, Form const &);
