/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cat.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrochet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/22 19:25:06 by mrochet           #+#    #+#             */
/*   Updated: 2022/06/22 20:18:06 by mrochet          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "cat.hpp"

Cat::Cat() : Animal()
{
	this->type = "Cat";
	std::cout << "Cat create" << std::endl;
}

Cat::Cat(std::string type) : Animal(type)
{
	this->type = type;
	std::cout <<  this->getType() << " create" << std::endl;
}

Cat::~Cat()
{
	std::cout <<  this->getType() << " delete" << std::endl;
}

Cat::Cat(Cat const &copy)
{
	*this = copy;
	std::cout << "Cat constructor copy is call" << std::endl;
}

Cat &Cat::operator=(Cat const &copy)
{
	this->type = copy.getType();
	return *this;
}

void Cat::makeSound() const
{
	std::cout << "Miaou !" << std::endl;	
}
