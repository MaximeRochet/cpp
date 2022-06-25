/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   chien.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrochet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/22 19:59:04 by mrochet           #+#    #+#             */
/*   Updated: 2022/06/25 01:34:22 by mrochet          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "aanimal.hpp"
#include "brain.hpp"
#include <string>
#include <iostream>

class Dog : public Aanimal
{
	public :
		Dog();
		Dog(std::string);
		Dog(Dog const &);
		virtual	~Dog();

		Dog &operator=(Dog const &);

		virtual	void makeSound() const;

	private :
		Brain *brain;
};
