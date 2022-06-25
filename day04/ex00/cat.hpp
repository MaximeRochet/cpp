/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrochet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/22 19:24:59 by mrochet           #+#    #+#             */
/*   Updated: 2022/06/22 20:23:32 by mrochet          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "animal.hpp"
#include <string>
#include <iostream>

class Cat : public Animal
{
	public :
		Cat();
		Cat(std::string);
		Cat(Cat const &);
		virtual	~Cat();

		Cat &operator=(Cat const &);

		virtual void makeSound() const;
};
