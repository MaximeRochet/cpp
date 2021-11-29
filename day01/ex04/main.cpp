/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrochet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/26 17:29:49 by mrochet           #+#    #+#             */
/*   Updated: 2021/11/29 19:08:05 by mrochet          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>

int ft_return(std::string str)
{
	std::cout<<str<<std::endl;
	return(1);
}

int main(int ac, char **av)
{	
	
	std::ifstream FILENAME;
	std::string s1 = av[2];
	std::string s2 = av[3];
	std::string srep = ".replace";

	FILENAME.open(av[1]);
	if(ac != 4)
		return(ft_return("4 arguments require (./replace fil s1 s2)"));
	std::ofstream filename (av[1] + srep);
	if(s1.empty() || s2.empty())
		return(ft_return("s1 or s2 doesn't exist"));
	
	std::cout<<FILENAME<<std::endl;
	std::cout<<filename<<std::endl;
	std::cout<<FILENAME.is_open()<<std::endl;
	std::cout<<filename.is_open()<<std::endl;
	std::cout<<filename.good()<<std::endl;
	return(0);
}
