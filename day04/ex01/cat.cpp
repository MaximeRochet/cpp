/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cat.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrochet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/22 19:25:06 by mrochet           #+#    #+#             */
/*   Updated: 2022/06/25 01:20:52 by mrochet          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "cat.hpp"

Cat::Cat() : Animal("Cat")
{
	std::cout << "Cat create" << std::endl;
	this->brain = new Brain();
}

Cat::Cat(std::string type) : Animal(type)
{
	std::cout <<  this->getType() << " create" << std::endl;
	this->brain = new Brain();
}

Cat::~Cat()
{
	delete this->brain;
	std::cout <<  this->getType() << " delete" << std::endl;
}

Cat::Cat(Cat const &copy)
{
	*this = copy;
	std::cout << "Cat constructor copy is call" << std::endl;
}

Cat &Cat::operator=(Cat const &copy)
{
	if (this != &copy)
	{
		this->type = copy.type;
		delete this->brain;
		this->brain = new Brain(*copy.brain);
		std::cout << "Cat copied" << std::endl;
	}
	return *this;
}

void Cat::makeSound() const
{
	std::cout << "Miaou !" << std::endl;	
}
