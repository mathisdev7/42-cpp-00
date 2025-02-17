/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mazeghou <mazeghou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/15 22:01:38 by mazeghou          #+#    #+#             */
/*   Updated: 2025/02/17 16:03:27 by mazeghou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "PhoneBook.hpp"

using namespace std;

void PhoneBook::AddContact(void)
{
	string prompt;

	prompt = "";
	if (this->index > 7)
		cout << "Since there is more than 7 contacts, we will now overwrite the first." << endl;
	while (!cin.eof() && prompt == "")
	{
		cout << "Enter his/her first name: ";
		if (getline(cin, prompt) && prompt != "")
			this->contacts[this->index % 8].setFirstName(prompt);
	}
	prompt = "";
	while (!cin.eof() && prompt == "")
	{
		cout << "Enter his/her last name: ";
		if (getline(cin, prompt) && prompt != "")
			this->contacts[this->index % 8].setLastName(prompt);
	}
	prompt = "";
	while (!cin.eof() && prompt == "")
	{
		cout << "Enter his/her nickname: ";
		if (getline(cin, prompt) && prompt != "")
			this->contacts[this->index % 8].setNickname(prompt);
	}
	prompt = "";
	while (!cin.eof() && prompt == "")
	{
		cout << "Enter his/her darkest secret: ";
		if (getline(cin, prompt) && prompt != "")
			this->contacts[this->index % 8].setDarkestSecret(prompt);
	}
	prompt = "";
	while (!cin.eof() && prompt == "")
	{
		cout << "Enter his/her phone number: ";
		if (getline(cin, prompt) && prompt != "")
			this->contacts[this->index % 8].setPhone(prompt);
	}
	this->PrintAllContact();
	this->index++;
}

void PhoneBook::PrintAllContact()
{
	for (int i = 0; i < 8; i++) {
		if (contacts[i].getFirstName().empty())
			continue;
		this->PrintContact(contacts[i]);
		cout << "--------" << endl;
	}
}

void PhoneBook::PrintContact(Contact contact)
{
	cout << "First name: " << contact.getFirstName() << endl;
    cout << "Last name: " << contact.getLastName() << endl;
    cout << "Nickname: " << contact.getNickname() << endl;
    cout << "Darkest secret: " << contact.getDarkestSecret() << endl;
    cout << "Phone: " << contact.getPhone() << endl;
}

PhoneBook::PhoneBook(void) {
	this->index = 0;
    cout << "Constructor called" << endl;
}

PhoneBook::~PhoneBook( void ) {
    cout << "Destructor called" << endl;
}
