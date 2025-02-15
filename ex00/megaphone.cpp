/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mazeghou <mazeghou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/15 21:30:38 by mazeghou          #+#    #+#             */
/*   Updated: 2025/02/15 21:43:46 by mazeghou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstring>
#include <cstdio>

using namespace std;

int main(int argc, char** argv) {
	if (argc < 2) {
		cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << endl;
		return (1);
	}
    for (int i = 1; i < argc; ++i) {
		for (size_t j = 0; j < strlen(argv[i]); ++j) {
			putchar(toupper(argv[i][j]));
		}
    }
	cout << endl;
	return (0);
}
