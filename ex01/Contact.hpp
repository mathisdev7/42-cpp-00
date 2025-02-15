/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mazeghou <mazeghou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/15 22:05:03 by mazeghou          #+#    #+#             */
/*   Updated: 2025/02/15 22:11:14 by mazeghou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <iostream>
# include <string>
using namespace std;

class Contact {
    public:
        Contact( string firstName, string lastName, string nickname, string darkestSecret, string phone );
        ~Contact( void );
		void Print( void );
    private:
        string firstName;
		string lastName;
		string nickname;
		string darkestSecret;
        string phone;
};
