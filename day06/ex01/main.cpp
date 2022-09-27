/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrochet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/30 19:48:29 by mrochet           #+#    #+#             */
/*   Updated: 2022/06/30 20:22:30 by mrochet          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */
#include "data.hpp"

uintptr_t serialize(Data* ptr)
{
	return(reinterpret_cast<uintptr_t>(ptr));
}


Data* deserialize(uintptr_t raw)
{
	return(reinterpret_cast<Data *>(raw));
}

int main()
{
	Data *data =  new Data;
	data->str = "string";
	std::cout << "adresse: " << data << std::endl;
	std::cout << "valeur: " << data->str << std::endl;

	uintptr_t tmp = serialize(data);
	std::cout << "serialize adresse: " << tmp << std::endl;
	
	Data *data2 = deserialize(tmp);
	std::cout << "deserialize adresse: " << data2 << std::endl;
	std::cout << "deserialize valeur: " << data2->str << std::endl;
	
	delete data;
	return (0);
}
