/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClassPhoneBook.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrochet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/13 15:27:10 by mrochet           #+#    #+#             */
/*   Updated: 2022/06/13 15:46:06 by mrochet          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ClassPhoneBook.hpp"

Phonebook::Phonebook(void)
{
	_nb_contact = 0;
	return ;
}

Phonebook::~Phonebook(void)
{
	return ;
}

void	Phonebook::affiche_contact(int i)
{
	if(i+1 > this->_nb_contact)
	{
		std::cout<<"Contact not found"<<std::endl;
		return;
	}
	std::cout << "First name : " << this->liste_contact[i].get_fist_name() << std::endl;
	std::cout << "Last name : " <<  this->liste_contact[i].get_last_name() << std::endl;
	std::cout << "Nickname : " <<  this->liste_contact[i].get_nickname() << std::endl;
	std::cout << "Phone Number : " <<  this->liste_contact[i].get_phone() << std::endl;
	std::cout << "Darkest Secret : " <<  this->liste_contact[i].get_secret() << std::endl;

}


int Phonebook::get_nb_contact(void) {return (this->_nb_contact);}
Contact *Phonebook::get_liste_contact(void) {return (this->liste_contact);}

void Phonebook::add_contact(void)
{
	std::string tmp;

	std::cout<<"__Contact numero " << this->get_nb_contact()<<"__"<<std::endl;
	this->liste_contact[_nb_contact].set_index(_nb_contact);
	std::cout<<"fist name : ";
	getline(std::cin, tmp);
	this->liste_contact[_nb_contact].set_fist_name(tmp);
	std::cout<<"last name : ";
	getline(std::cin, tmp);
	this->liste_contact[_nb_contact].set_last_name(tmp);
	std::cout<<"nickname : ";
	getline(std::cin, tmp);
	this->liste_contact[_nb_contact].set_nickname(tmp);
	std::cout<<"phone number : ";
	getline(std::cin, tmp);
	this->liste_contact[_nb_contact].set_phone(tmp);
	std::cout<<"darkest secret : ";
	getline(std::cin, tmp);
	this->liste_contact[_nb_contact].set_secret(tmp);
	this->_nb_contact++;
}

void	Phonebook::liste_view()
{
	if (this->_nb_contact == 0)
	{
		std::cout<<"contact not found"<<std::endl;
		return;
	}
	std::cout<<"     INDEX|FIRST_NAME| LAST_NAME|  NICKNAME|"<<std::endl;
	for (int i = 0; i < this->_nb_contact; i++)
	{
		std::cout << std::right << std::setw(10) << this->liste_contact[i].get_index() << "|";
		if (this->liste_contact[i].get_fist_name().size() > 10)
			std::cout << std::right << std::setw(9) <<  this->liste_contact[i].get_fist_name().substr(0, 9) << ".|";
		else
			std::cout << std::right << std::setw(10) << this->liste_contact[i].get_fist_name().substr(0, 10) << "|";
		if (this->liste_contact[i].get_last_name().size() > 10)
			std::cout << std::right << std::setw(9) <<  this->liste_contact[i].get_last_name().substr(0, 9) << ".|";
		else
			std::cout << std::right << std::setw(10) <<  this->liste_contact[i].get_last_name().substr(0, 10) << "|";
		if (this->liste_contact[i].get_nickname().size() > 10)
			std::cout << std::right << std::setw(9) <<  this->liste_contact[i].get_nickname().substr(0, 9) << ".|";
		else
			std::cout << std::right << std::setw(10) <<  this->liste_contact[i].get_nickname().substr(0, 10) << "|";
		std::cout << std::endl;

	}
}
