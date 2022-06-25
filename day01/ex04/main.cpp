/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrochet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/26 17:29:49 by mrochet           #+#    #+#             */
/*   Updated: 2022/06/16 14:56:40 by mrochet          ###   ########lyon.fr   */
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

	std::string file_name = av[1];
	std::string s1 = av[2];
	std::string s2 = av[3];
	if(ac != 4)
		return(ft_return("4 arguments require (./replace fil s1 s2)"));
	if(s1.empty() || s2.empty())
		return(ft_return("s1 or s2 doesn't exist"));

	std::ifstream ifs;
	ifs.open(file_name);
	if (ifs.fail())
	{
		std::cout << "Error: the file cannot found or reading" << std::endl;
		return 1;
	}

	int i;
	std::string str;
	std::ofstream ofs;

	ofs.open(file_name + ".replace");
	while(std::getline(ifs, str))
	{
		while ((i = str.find(s1)) != -1)
		{
			str.erase(i, s2.size());
			str.insert(i, s2, 0, s2.size());
		}
		ofs << str << std::endl;
	}

	return(0);
}
