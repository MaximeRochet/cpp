/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   annuaire.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrochet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 14:45:26 by mrochet           #+#    #+#             */
/*   Updated: 2021/11/24 14:45:40 by mrochet          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "annuaire.hpp"

Contact::Contact(void)
{
	return ;
}

Contact::~Contact(void)
{
	return ;
}

void Contact::set_index(int i) {this->_index = i;}
void Contact::set_fist_name(std::string str) {this->_first_name = str;}
void Contact::set_last_name(std::string str) {this->_last_name = str;}
void Contact::set_nickname(std::string str) {this->_nickname = str;}
void Contact::set_phone(std::string str) {this->_phone = str;}
void Contact::set_secret(std::string str) {this->_secret = str;}

int Contact::get_index() {return(this->_index);}
std::string Contact::get_fist_name() {return(this->_first_name);}
std::string Contact::get_last_name() {return(this->_last_name);}
std::string Contact::get_nickname() {return(this->_nickname);}
std::string Contact::get_phone() {return(this->_phone);}
std::string Contact::get_secret() {return(this->_secret);}

void	Contact::detail()
{
	std::cout<<"Contact numero : " << this->get_index()<<std::endl;
	std::cout<<"First name : " << this->get_fist_name()<<std::endl;
	std::cout<<"Last name : " << this->get_last_name()<<std::endl;
	std::cout<<"Nickname : " << this->get_nickname()<<std::endl;
	std::cout<<"Phone : " << this->get_phone()<<std::endl;
	std::cout<<"Darkest secret : " << this->get_secret()<<std::endl;
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

Phonebook::Phonebook(void)
{
	_nb_contact = 0;
	return ;
}

Phonebook::~Phonebook(void)
{
	return ;
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
