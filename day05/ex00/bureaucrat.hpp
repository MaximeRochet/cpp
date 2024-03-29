/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrochet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/25 06:00:29 by mrochet           #+#    #+#             */
/*   Updated: 2022/06/27 10:02:53 by mrochet          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

#pragma once

class Bureaucrat
{
	public :

		class GradeTooHighException : public std::exception
		{
			public :

				const char *what() const throw();
		};

		class GradeTooLowException : public std::exception
		{
			public :

				const char *what() const throw();
		};

		Bureaucrat();
		Bureaucrat(std::string);
		Bureaucrat(std::string, int);
		Bureaucrat(Bureaucrat const &);
		~Bureaucrat();

		std::string getName() const;
		int getGrade() const;

		void setGrade(int);

		Bureaucrat &operator++();
		Bureaucrat &operator--();
		Bureaucrat operator++(int);
		Bureaucrat operator--(int);
		Bureaucrat &operator=(Bureaucrat const &);

	protected:
		const std::string name;
		int grade;
};

std::ostream &operator<<(std::ostream &, Bureaucrat const &);
