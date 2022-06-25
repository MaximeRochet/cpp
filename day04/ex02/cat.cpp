/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cat.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrochet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/22 19:25:06 by mrochet           #+#    #+#             */
/*   Updated: 2022/06/25 01:35:12 by mrochet          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "cat.hpp"

Cat::Cat() : Aanimal()
{
	this->type = "Cat";
	std::cout << "Cat create" << std::endl;
	this->brain = new Brain();
}

Cat::Cat(std::string type) : Aanimal(type)
{
	this->type = type;
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
	this->type = copy.getType();
	this->brain = copy.brain;
	std::cout << "Cat copied" << std::endl;	
	return *this;
}

void Cat::makeSound() const
{
	std::cout << "Miaou !" << std::endl;	
}
