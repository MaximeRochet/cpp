/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrochet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 14:45:34 by mrochet           #+#    #+#             */
/*   Updated: 2022/06/13 15:59:10 by mrochet          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ClassPhoneBook.hpp"

void add(Phonebook *phonebook)
{
	if(phonebook->get_nb_contact() < 8)		
		phonebook->add_contact();
	else
		std::cout<<"Memory is full"<<std::endl;
	std::cout << "> ";	
}

void search(Phonebook *phonebook, std::string cmd)
{
	phonebook->liste_view();
	if(phonebook->get_nb_contact() > 0)
	std::cout<<"index du contact : ";
	getline(std::cin, cmd);
	if(cmd.find_first_not_of("01234567") == std::string::npos)
		phonebook->affiche_contact(stoi(cmd));
	else
		std::cout<<"invalid index"<<std::endl;
	std::cout << "> ";	
}

int main()
{
	Phonebook phonebook;
	std::string cmd;
	std::cout << "> ";	
	while(getline(std::cin, cmd) && cmd.compare("EXIT"))
	{
		if(!cmd.compare("ADD"))
		 	add(&phonebook);
		else if(!cmd.compare("SEARCH"))
			search(&phonebook, cmd);
		else
			std::cout << "invalid command = ADD,  SEARCH or EXIT : ";	
	}
	return (0);
}
