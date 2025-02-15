/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mazeghou <mazeghou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/15 22:01:32 by mazeghou          #+#    #+#             */
/*   Updated: 2025/02/15 22:09:53 by mazeghou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "PhoneBook.hpp"
# include "Contact.hpp"

int main() {
    PhoneBook phonebook;
	Contact contact( "John", "Doe", "johndoe", "42", "0612345678" );
	contact.Print();
    return (0);
}
