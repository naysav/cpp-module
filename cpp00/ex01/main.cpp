/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralena <ralena@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/06 17:28:08 by ralena            #+#    #+#             */
/*   Updated: 2022/03/06 17:28:09 by ralena           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int	main(void)
{
	PhoneBook PhoneBook;
	std::string command;

	PhoneBook.printStartMessage();
	while (true) {
		std::cout << ">";
		std::getline(std::cin, command);
		if (command == "ADD")
			PhoneBook.addContact();
		else if (command == "SEARCH")
			PhoneBook.searchContact();
		else if (command == "EXIT")
			break;
	}
	return (0);
}
