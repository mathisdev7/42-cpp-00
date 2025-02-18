/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mazeghou <mazeghou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/15 22:05:03 by mazeghou          #+#    #+#             */
/*   Updated: 2025/02/18 05:22:50 by mazeghou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
#define CONTACT_HPP
#include <iostream>
#include <string>
using namespace std;

class Contact
{
public:
	Contact(void);
	~Contact(void);
	string getFirstName(void);
	string getLastName(void);
	string getNickname(void);
	string getDarkestSecret(void);
	string getPhone(void);
	void setFirstName(string firstName);
	void setLastName(string lastName);
	void setNickname(string nickname);
	void setDarkestSecret(string darketSecret);
	void setPhone(string phone);

private:
	string firstName;
	string lastName;
	string nickname;
	string darkestSecret;
	string phone;
};

#endif
