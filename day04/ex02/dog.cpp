/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dog.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrochet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/22 19:59:24 by mrochet           #+#    #+#             */
/*   Updated: 2022/06/25 01:35:38 by mrochet          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "dog.hpp"

Dog::Dog() : Aanimal()
{
	this->brain = new Brain();
	std::cout << "Dog create" << std::endl;
	this->type = "Dog";
}

Dog::Dog(std::string type) : Aanimal(type)
{
	this->type = type;
	std::cout <<  this->getType() << " create" << std::endl;
	this->brain = new Brain();
}

Dog::~Dog()
{
	delete this->brain;
	std::cout <<  this->getType() << " delete" << std::endl;
}

Dog::Dog(Dog const &copy)
{
	*this = copy;
	std::cout << "Dog constructor copy is call" << std::endl;
}

Dog &Dog::operator=(Dog const &copy)
{
	this->type = copy.getType();
	return *this;
}

void Dog::makeSound() const
{
	std::cout << "Ouaf !" << std::endl;	
}
