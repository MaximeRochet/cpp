/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrochet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/25 06:00:29 by mrochet           #+#    #+#             */
/*   Updated: 2022/06/25 06:07:01 by mrochet          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib>
#include <iostream>

#pragma once

class Bureaucrat
{
	public :
		Bureaucrat(std::string);
		Bureaucrat(std::string, int);
		Bureaucrat(Bureaucrat const &);
		~Bureaucrat;

		Bureaucrat operator=(Bureaucrat const &);

	private:
		const std::string name;
		int grade;


}
