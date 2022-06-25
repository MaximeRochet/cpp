/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrochet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/22 17:00:24 by mrochet           #+#    #+#             */
/*   Updated: 2022/06/25 01:31:09 by mrochet          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "aanimal.hpp"

Aanimal::Aanimal()
{
	this->type = "Not_define";
	std::cout << "Aanimal create" << std::endl;
}

Aanimal::Aanimal(std::string type)
{
	this->type = type;
	std::cout << "Aanimal " << this->getType() << " create" << std::endl;
}

Aanimal::~Aanimal()
{
	std::cout << "Aanimal " << this->getType() << " delete" << std::endl;
}

Aanimal::Aanimal(Aanimal const &copy)
{
	*this = copy;
	std::cout << "Constructor copy is call" << std::endl;
}

Aanimal &Aanimal::operator=(Aanimal const &copy)
{
	this->type = copy.getType();
	return *this;
}

std::string Aanimal::getType() const { return this->type; }

void Aanimal::set_type(std::string name){ this->type = name; }

void Aanimal::makeSound() const
{
	std::cout << "Inaudible animal sound" << std::endl;	
}
