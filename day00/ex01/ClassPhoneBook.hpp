/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClassPhoneBook.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrochet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/13 15:14:23 by mrochet           #+#    #+#             */
/*   Updated: 2022/06/13 15:53:48 by mrochet          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLASSPHONEBOOK_HPP
# define CLASSPHONEBOOK_HPP

#include "ClassContact.hpp"

class Phonebook{
	public:
		Phonebook(void);
		~Phonebook(void);

		int get_nb_contact(void);
		Contact *get_liste_contact(void);
		void affiche_contact(int i);

		void add_contact(void);
		void liste_view(void);

	private:
		int _nb_contact;
		Contact liste_contact[8];
};

#endif
