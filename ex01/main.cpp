/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mazeghou <mazeghou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/15 22:01:32 by mazeghou          #+#    #+#             */
/*   Updated: 2025/02/17 15:53:15 by mazeghou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "PhoneBook.hpp"
# include "Contact.hpp"

int main() {
    PhoneBook phonebook;
	Contact contact;
	string prompt;

	while (prompt != "EXIT")
	{
		cout << "Enter a command name: ";
		getline(cin, prompt);
		if (prompt == "ADD")
			phonebook.AddContact();
	}
    return (0);
}
