/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrochet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 14:45:34 by mrochet           #+#    #+#             */
/*   Updated: 2021/11/24 14:45:36 by mrochet          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "annuaire.hpp"

void add(Phonebook *annuaire)
{
	if(annuaire->get_nb_contact() < 8)		
		annuaire->add_contact();
	else
		std::cout<<"Memory is full"<<std::endl;
}

void search(Phonebook *annuaire, std::string cmd)
{
	annuaire->liste_view();
	if(annuaire->get_nb_contact() > 0)
	std::cout<<"index du contact : ";
	getline(std::cin, cmd);
	if(cmd.find_first_not_of("01234567") == std::string::npos)
		annuaire->affiche_contact(stoi(cmd));
	else
		std::cout<<"invalid index"<<std::endl;
}

int main()
{
	Phonebook annuaire;
	std::string cmd;

	while(getline(std::cin, cmd) && cmd.compare("EXIT"))
	{
		if(!cmd.compare("ADD"))
		 	add(&annuaire);
		else if(!cmd.compare("SEARCH"))
			search(&annuaire, cmd);			
	}
	return (0);
}
