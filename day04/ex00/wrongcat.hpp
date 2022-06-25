/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   wrongcat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrochet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/22 20:53:35 by mrochet           #+#    #+#             */
/*   Updated: 2022/06/23 17:28:58 by mrochet          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "wronganimal.hpp"
#include <string>
#include <iostream>

class WrongCat : public WrongAnimal
{
	public :
		WrongCat();
		WrongCat(std::string);
		WrongCat(WrongCat const &);
		virtual	~WrongCat();

		WrongCat &operator=(WrongCat const &);

		virtual void makeSound() const;
};
