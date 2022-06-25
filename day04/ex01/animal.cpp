/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrochet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/22 17:00:24 by mrochet           #+#    #+#             */
/*   Updated: 2022/06/25 00:27:48 by mrochet          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "animal.hpp"

Animal::Animal()
{
	this->type = "Not_define";
	std::cout << "Animal create" << std::endl;
}

Animal::Animal(std::string type)
{
	this->type = type;
	std::cout << "Animal " << this->getType() << " create" << std::endl;
}

Animal::~Animal()
{
	std::cout << "Animal " << this->getType() << " delete" << std::endl;
}

Animal::Animal(Animal const &copy)
{
	*this = copy;
	std::cout << "Constructor copy is call" << std::endl;
}

Animal &Animal::operator=(Animal const &copy)
{
	this->type = copy.getType();
	std::cout << "Animal" << std::endl;
	return *this;

}

std::string Animal::getType() const { return this->type; }

void Animal::set_type(std::string name){ this->type = name; }

void Animal::makeSound() const
{
	std::cout << "Inaudible animal sound" << std::endl;	
}
