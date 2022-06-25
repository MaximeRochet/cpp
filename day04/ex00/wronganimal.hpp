/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   wronganimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrochet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/22 20:52:24 by mrochet           #+#    #+#             */
/*   Updated: 2022/06/23 17:21:13 by mrochet          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <string>
#include <iostream>

class WrongAnimal
{
	public :
		WrongAnimal();
		WrongAnimal(std::string);
		WrongAnimal(WrongAnimal const &);

		virtual	~WrongAnimal();

		WrongAnimal &operator=(WrongAnimal const &);

		void set_type(std::string);
		std::string getType() const;

		 void makeSound() const;

	protected :
		std::string type;
};
