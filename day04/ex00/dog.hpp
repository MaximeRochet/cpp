/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   chien.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrochet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/22 19:59:04 by mrochet           #+#    #+#             */
/*   Updated: 2022/06/22 20:23:49 by mrochet          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "animal.hpp"
#include <string>
#include <iostream>

class Dog : public Animal
{
	public :
		Dog();
		Dog(std::string);
		Dog(Dog const &);
		virtual	~Dog();

		Dog &operator=(Dog const &);

		virtual	void makeSound() const;
};
