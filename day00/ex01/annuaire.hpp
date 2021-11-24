#ifndef ANNUAIRE_H
# define ANNUAIRE_H

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
