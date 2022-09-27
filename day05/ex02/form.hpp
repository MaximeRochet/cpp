/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrochet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/27 12:11:47 by mrochet           #+#    #+#             */
/*   Updated: 2022/06/28 12:32:48 by mrochet          ###   ########lyon.fr   */
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
		class FormAlreadySigned : public std::exception
		{
		public :
			const char *what() const throw();
		};

		class FormNotSigned : public std::exception
		{
		public :
			const char *what() const throw();
		};

		Form();
		Form(std::string);
		Form(std::string, int, int);
		Form(Form const &);
		virtual ~Form() = 0;

		Form &operator=(Form const &);


		std::string getName() const;
		int getGradeSign() const;
		int getGradeExec() const;
		bool getSign() const;
		std::string getTarget() const;

		void setTarget(std::string const target);
		void setSign();

		void beSigned(Bureaucrat const &);
		virtual void executeForm(Bureaucrat const &b) const;
	
	private:
		std::string _name;
		std::string _target;
		bool _sign;
		const int _grade_sign;
		const int _grade_exec;

};

std::ostream &operator<<(std::ostream &, Form const &);
