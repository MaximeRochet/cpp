/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   wrongcat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrochet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/22 20:52:47 by mrochet           #+#    #+#             */
/*   Updated: 2022/06/23 17:31:58 by mrochet          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "wrongcat.hpp"

WrongCat::WrongCat()
{
	this->type = "WrongCat";
	std::cout << "WrongCat create" << std::endl;
}

WrongCat::WrongCat(std::string type)
{
	this->type = type;
	std::cout <<  this->getType() << " create" << std::endl;
}

WrongCat::~WrongCat()
{
	std::cout <<  this->getType() << " delete" << std::endl;
}

WrongCat::WrongCat(WrongCat const &copy)
{
	*this = copy;
	std::cout << "WrongCat constructor copy is call" << std::endl;
}

WrongCat &WrongCat::operator=(WrongCat const &copy)
{
	this->type = copy.getType();
	return *this;
}

void WrongCat::makeSound() const
{
	std::cout << "Miaou !" << std::endl;	
}
