/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   wronganimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrochet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/22 20:52:34 by mrochet           #+#    #+#             */
/*   Updated: 2022/06/22 20:52:38 by mrochet          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "wronganimal.hpp"

WrongAnimal::WrongAnimal()
{
	this->type = "Not_define";
	std::cout << "WrongAnimal create" << std::endl;
}

WrongAnimal::WrongAnimal(std::string type)
{
	this->type = type;
	std::cout << "WrongAnimal " << this->getType() << " create" << std::endl;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "WrongAnimal " << this->getType() << " delete" << std::endl;
}

WrongAnimal::WrongAnimal(WrongAnimal const &copy)
{
	*this = copy;
	std::cout << "Constructor copy is call" << std::endl;
}

WrongAnimal &WrongAnimal::operator=(WrongAnimal const &copy)
{
	this->type = copy.getType();
	return *this;
}

std::string WrongAnimal::getType() const { return this->type; }

void WrongAnimal::set_type(std::string name){ this->type = name; }

void WrongAnimal::makeSound() const
{
	std::cout << "Inaudible animal sound" << std::endl;	
}
