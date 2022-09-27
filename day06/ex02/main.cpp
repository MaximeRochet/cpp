/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrochet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/30 22:44:12 by mrochet           #+#    #+#             */
/*   Updated: 2022/06/30 22:51:00 by mrochet          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrochet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/30 20:43:53 by mrochet           #+#    #+#             */
/*   Updated: 2022/06/30 22:43:53 by mrochet          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#include <iostream>

Base *generate(void)
{
	srand(time(0));
	int i = rand() % 3;
	
	if(i == 0)
		return (new A);
	else if(i == 1)
		return (new B);
	else
		return (new C);
}

void identify(Base& p)
{
	try
	{
		A a = dynamic_cast<A &>(p);
		std::cout<< "A" << std::endl; 
	}
	catch(std::bad_cast &e)
	{
	}
	try
	{
		B b = dynamic_cast<B &>(p);
		std::cout<< "B" << std::endl; 
	}
	catch(std::bad_cast &e)
	{
	}
	try
	{
		C c = dynamic_cast<C &>(p);
		std::cout<< "C" << std::endl; 
	}
	catch(std::bad_cast &e)
	{
	}
}

void identify(Base* p)
{
	if (dynamic_cast<A *>(p))
		std::cout<< "A" << std::endl; 
	else if (dynamic_cast<B *>(p))
		std::cout<< "B" << std::endl; 
	else if (dynamic_cast<C *>(p))
		std::cout<< "C" << std::endl;	
}

int main()
{
	Base *p = generate();
	identify(p);
	identify(*p);
	return 0;
}
