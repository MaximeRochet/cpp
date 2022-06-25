/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrochet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/22 17:45:24 by mrochet           #+#    #+#             */
/*   Updated: 2022/06/25 01:30:22 by mrochet          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <string>
#include <iostream>

class Aanimal
{
	public :
		Aanimal();
		Aanimal(std::string);
		Aanimal(Aanimal const &);

		virtual	~Aanimal();

		Aanimal &operator=(Aanimal const &);

		void set_type(std::string);
		std::string getType() const;

		virtual void makeSound() const = 0;

	protected :
		std::string type;
};
