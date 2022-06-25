/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClassAnnuaire.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrochet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/13 15:26:51 by mrochet           #+#    #+#             */
/*   Updated: 2022/06/13 15:44:43 by mrochet          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLASSANNUAIRE_HPP
# define CLASSANNUAIRE_HPP

#include <string>
#include <iostream>
#include <iomanip>

class Contact{
	public:
		Contact(void);
		~Contact(void);

		void	detail();

		void	set_index(int i);
		void	set_fist_name(std::string str);
		void	set_last_name(std::string str);
		void	set_nickname(std::string str);
		void	set_phone(std::string str);
		void	set_secret(std::string str);
	
		int			get_index(void);
		std::string	get_fist_name(void);
		std::string get_last_name(void);
		std::string get_nickname(void);
		std::string get_phone(void);
		std::string get_secret(void);
	
	private:
		int			_index;
		std::string _first_name;
		std::string _last_name;
		std::string _nickname;
		std::string _phone;
		std::string _secret;
};

#endif
