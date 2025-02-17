/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mazeghou <mazeghou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/15 22:01:40 by mazeghou          #+#    #+#             */
/*   Updated: 2025/02/17 15:56:25 by mazeghou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP
#include <iostream>
#include "Contact.hpp"
using namespace std;

class PhoneBook {
    public:
        PhoneBook(void);
		~PhoneBook(void);
		void AddContact(void);
		void SearchContact(void);
		void PrintContact(Contact contact);
		void PrintAllContact(void);
		Contact getContact(int index);
	private:
		Contact contacts[8];
		int index;
};

#endif
