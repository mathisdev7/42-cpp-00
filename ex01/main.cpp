/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mazeghou <mazeghou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/15 22:01:32 by mazeghou          #+#    #+#             */
/*   Updated: 2025/02/18 05:53:53 by mazeghou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include "Contact.hpp"

int main()
{
	PhoneBook phonebook;
	Contact contact;
	string prompt;

	while (prompt != "EXIT")
	{
		cout << "Current commands: ADD (Add a contact), SEARCH (Find a contact), EXIT (Exit program)" << endl;
		cout << "Enter a command name: ";
		getline(cin, prompt);
		if (prompt == "ADD")
			phonebook.AddContact();
		else if (prompt == "SEARCH")
			phonebook.SearchContact();
	}
	return (0);
}
