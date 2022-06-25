/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrochet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/22 17:45:24 by mrochet           #+#    #+#             */
/*   Updated: 2022/06/22 20:21:50 by mrochet          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <string>
#include <iostream>

class Animal
{
	public :
		Animal();
		Animal(std::string);
		Animal(Animal const &);

		virtual	~Animal();

		Animal &operator=(Animal const &);

		void set_type(std::string);
		std::string getType() const;

		virtual void makeSound() const;

	protected :
		std::string type;
};
