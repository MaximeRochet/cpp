/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrochet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/22 16:59:22 by mrochet           #+#    #+#             */
/*   Updated: 2022/06/23 17:39:14 by mrochet          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "animal.hpp"
#include "cat.hpp"
#include "dog.hpp"

#include "wronganimal.hpp"
#include "wrongcat.hpp"

int main()
{
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	
	meta->makeSound();
	i->makeSound();
	j->makeSound();

	delete meta; 
	delete j;
	delete i;
	
	std::cout << std::endl;	
	
	const WrongAnimal* y = new WrongAnimal();
	const WrongAnimal* k = new WrongCat();
	
	y->makeSound();
	k->makeSound();
	
	delete y;
	delete k;
	

}

