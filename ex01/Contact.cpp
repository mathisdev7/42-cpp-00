/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mazeghou <mazeghou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/15 22:06:35 by mazeghou          #+#    #+#             */
/*   Updated: 2025/02/15 22:11:25 by mazeghou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Contact.hpp"

Contact::Contact( string firstName, string lastName, string nickname, string darkestSecret, string phone ) {
	cout << "Constructor called" << endl;
    this->firstName = firstName;
    this->lastName = lastName;
    this->nickname = nickname;
    this->darkestSecret = darkestSecret;
    this->phone = phone;
}

Contact::~Contact( void ) {
    cout << "Destructor called" << endl;
}

void Contact::Print( void ) {
    cout << "First name: " << this->firstName << endl;
    cout << "Last name: " << this->lastName << endl;
    cout << "Nickname: " << this->nickname << endl;
    cout << "Darkest secret: " << this->darkestSecret << endl;
    cout << "Phone: " << this->phone << endl;
}
