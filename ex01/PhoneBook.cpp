/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mazeghou <mazeghou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/15 22:01:38 by mazeghou          #+#    #+#             */
/*   Updated: 2025/02/18 12:36:01 by mazeghou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include <iomanip>
#include <sstream>

using namespace std;

void PhoneBook::AddContact(void)
{
	string prompt;
	int temp_index;

	prompt = "";
	temp_index = 0;
	if (this->index == 8)
		cout << "Since there is more than 7 contacts, we will now overwrite the first." << endl;
	else
		temp_index = this->index;
	while (!cin.eof() && prompt == "")
	{
		cout << "Enter his/her first name: ";
		if (getline(cin, prompt) && prompt != "")
			this->contacts[temp_index].setFirstName(prompt);
	}
	prompt = "";
	while (!cin.eof() && prompt == "")
	{
		cout << "Enter his/her last name: ";
		if (getline(cin, prompt) && prompt != "")
			this->contacts[temp_index].setLastName(prompt);
	}
	prompt = "";
	while (!cin.eof() && prompt == "")
	{
		cout << "Enter his/her nickname: ";
		if (getline(cin, prompt) && prompt != "")
			this->contacts[temp_index].setNickname(prompt);
	}
	prompt = "";
	while (!cin.eof() && prompt == "")
	{
		cout << "Enter his/her darkest secret: ";
		if (getline(cin, prompt) && prompt != "")
			this->contacts[temp_index].setDarkestSecret(prompt);
	}
	prompt = "";
	while (!cin.eof() && prompt == "")
	{
		cout << "Enter his/her phone number: ";
		if (getline(cin, prompt) && prompt != "")
			this->contacts[temp_index].setPhone(prompt);
	}
	if (this->index < 8)
		this->index++;
}

void PhoneBook::PrintContact(Contact contact)
{
	cout << "First name: " << contact.getFirstName() << endl;
	cout << "Last name: " << contact.getLastName() << endl;
	cout << "Nickname: " << contact.getNickname() << endl;
	cout << "Darkest secret: " << contact.getDarkestSecret() << endl;
	cout << "Phone: " << contact.getPhone() << endl;
}

PhoneBook::PhoneBook(void)
{
	this->index = 0;
	cout << "Welcome to phonebook, register your friends as contacts" << endl;
}

PhoneBook::~PhoneBook(void)
{
	cout << "Well, goodbye." << endl;
}

void PhoneBook::SearchContact()
{
	cout << "|     Index|First Name| Last Name|  Nickname|" << endl;
	for (int i = 0; i < this->index; i++)
	{
		if (contacts[i].getFirstName().empty())
			continue;
		string firstName = contacts[i].getFirstName();
		string lastName = contacts[i].getLastName();
		string nickname = contacts[i].getNickname();

		if (firstName.length() > 10)
		{
			firstName = firstName.substr(0, 9) + ".";
		}
		if (lastName.length() > 10)
		{
			lastName = lastName.substr(0, 9) + ".";
		}
		if (nickname.length() > 10)
		{
			nickname = nickname.substr(0, 9) + ".";
		}

		cout << "|" << setw(10) << right << i
			 << "|" << setw(10) << left << firstName
			 << "|" << setw(10) << left << lastName
			 << "|" << setw(10) << left << nickname << "|" << endl;
	}
	string input;
	cout << "Enter contact index (0-7): ";
	getline(cin, input);
	try
	{
		istringstream iss(input);
		int temp;
		if (!(iss >> temp))
		{
			cout << "Invalid index format." << endl;
			return;
		}
		if (temp < 0 || temp >= 8)
		{
			cout << "Invalid index range, must be between 0 and 8." << endl;
			return;
		}
		if (contacts[temp].getFirstName().empty())
		{
			cout << "Empty contact." << endl;
			return;
		}
		PrintContact(contacts[temp]);
	}
	catch (...)
	{
		cout << "Invalid index format." << endl;
	}
}
