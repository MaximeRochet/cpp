/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrochet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/24 19:30:41 by mrochet           #+#    #+#             */
/*   Updated: 2022/06/24 19:43:23 by mrochet          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "brain.hpp"

Brain::Brain()
{
	std::cout << "Brain create" << std::endl;
}

Brain::~Brain()
{
	std::cout << "Brain " << " delete" << std::endl;
}

Brain::Brain(Brain const &copy)
{
	*this = copy;
	std::cout << "Constructor copy is call" << std::endl;
}

Brain &Brain::operator=(Brain const &copy)
{
	int i = -1;
	while (++i < 100)
		this->ideas[i] = copy.ideas[i];
	return *this;
}
