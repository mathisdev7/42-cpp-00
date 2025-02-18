/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mazeghou <mazeghou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/15 22:06:35 by mazeghou          #+#    #+#             */
/*   Updated: 2025/02/18 05:22:56 by mazeghou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact() {}

Contact::~Contact(void)
{
}

void Contact::setFirstName(string firstName)
{
	this->firstName = firstName;
}

void Contact::setLastName(string lastName)
{
	this->lastName = lastName;
}

void Contact::setNickname(string nickname)
{
	this->nickname = nickname;
}

void Contact::setDarkestSecret(string darkestSecret)
{
	this->darkestSecret = darkestSecret;
}

void Contact::setPhone(string phone)
{
	this->phone = phone;
}

string Contact::getFirstName(void)
{
	return (this->firstName);
}

string Contact::getLastName(void)
{
	return (this->lastName);
}

string Contact::getNickname(void)
{
	return (this->nickname);
}

string Contact::getDarkestSecret(void)
{
	return (this->darkestSecret);
}

string Contact::getPhone(void)
{
	return (this->phone);
}
