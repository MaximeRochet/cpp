/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClassAnnuaire.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrochet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/13 15:26:41 by mrochet           #+#    #+#             */
/*   Updated: 2022/06/13 15:54:09 by mrochet          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ClassContact.hpp"

Contact::Contact(void)
{
	return ;
}

Contact::~Contact(void)
{
	return ;
}

void Contact::set_index(int i){this->_index = i;}

void Contact::set_fist_name(std::string str) {
	while (str.size() < 3)
	{
		std::cout << "3 caracter minimum for your first name: ";
		getline(std::cin, str);
	}
	this->_first_name = str;
}

void Contact::set_last_name(std::string str) {
	while (str.size() < 3)
	{
		std::cout << "3 caracter minimum for your last name: ";
		getline(std::cin, str);
	}
	this->_last_name = str;
}

void Contact::set_nickname(std::string str) {
	while (str.size() < 3)
	{
		std::cout << "3 caracter minimum for your nickname: ";
		getline(std::cin, str);
	}
	this->_nickname = str;
}

void Contact::set_phone(std::string str) {
	while (str.find_first_not_of("0123456789") != std::string::npos || str.size() != 10)
	{
		std::cout << "Number phone invalid : ";
		getline(std::cin, str);
	}
	this->_phone = str;
}

void Contact::set_secret(std::string str) {
	while (str.size() < 10)
	{
		std::cout << "Caracter minimum for your secret: " ;
		getline(std::cin, str);
	}

	this->_secret = str;
}

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
