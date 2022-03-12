/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralena <ralena@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/06 17:28:14 by ralena            #+#    #+#             */
/*   Updated: 2022/03/06 17:28:15 by ralena           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook() {
	this->amount = 0;
}

void PhoneBook::printStartMessage(void) {
	std::cout << "# PhoneBook" << std::endl;
	std::cout << "# Enter command [ADD, SEARCH, EXIT]:" << std::endl;
}

void PhoneBook::addContact(void) {
	if (this->amount == 8) {
		for (int counter = 0; counter < amount - 1; counter++)	{
			this->contacts[counter] = this->contacts[counter + 1];
			this->contacts[counter].decrementIndex();
		}
		this->contacts[this->amount - 1].setInformation(8);
	}
	else if (this->contacts[this->amount].setInformation(this->amount + 1))
		this->amount++;
}

void PhoneBook::displayPhoneBook(void) {
	std::cout << "|-------------------------------------------|" << std::endl;
	std::cout << "|     Index|First Name| Last Name|  Nickname|" << std::endl;
	std::cout << "|-------------------------------------------|" << std::endl;
	for (int i = 0; i < this->amount; i++)
		this->contacts[i].displayContactInPhoneBook();
	std::cout << "|-------------------------------------------|" << std::endl;
}

void PhoneBook::searchContact(void) {
	int	index;

	if (this->amount == 0)
		std::cout << "# Add a contact before searching." << std::endl;
	else
	{
		this->displayPhoneBook();
		std::cout << "# Enter Index to display full information about Contact\n~";
		while (!(std::cin >> index) || (index < 1 || index > this->amount)) {
			std::cin.clear();
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
			std::cout << "# Invalid Index.\n~";
		}
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		this->contacts[index - 1].displayFullContactInformation();
	}
}

PhoneBook::~PhoneBook() {
}