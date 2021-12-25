/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcarmen <rcarmen@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/19 12:30:18 by rcarmen           #+#    #+#             */
/*   Updated: 2021/12/21 14:08:21 by rcarmen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <iostream>

int main(int ac, char **av) {

	if (ac == 1) {
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
		return 0;
	}
	for (int i = 1; i < ac; i++) {
		for (int j = 0; j < strlen(av[i]); j++) {
			std::cout << (char)toupper(av[i][j]);
		}
		std::cout << " ";
	}
	std::cout << std::endl;
}