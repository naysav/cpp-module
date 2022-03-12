/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralena <ralena@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/06 17:28:01 by ralena            #+#    #+#             */
/*   Updated: 2022/03/06 17:28:02 by ralena           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

std::string Contact::fields_name[5] = {
	"First Name",
	"Last Name",
	"Nickname",
	"Phone Number",
	"Darkest Secret"
};

Contact::Contact() {
	for (int i = FirstName; i <= Secret; i++)
		this->informations[i] = std::string();
}

void Contact::decrementIndex() {
	this->index--;
}

bool Contact::setInformation(int index) {
	this->index = index;
	for (int i = FirstName; i <= Secret; i++)
	{
		std::cout << "# " << Contact::fields_name[i] << ":\n+";
		std::getline(std::cin, this->informations[i]);
	}
	for (int i = FirstName; i <= Secret; i++) {
		if (this->informations[i].length() == 0) {
			std::cout << "# Field \"" + Contact::fields_name[i] + "\" is empty, all fields must be filled.\n" +
				"# Contact will not be saved." << std::endl;
			return (false);
		}
	}
	std::cout << "# Contact added." << std::endl;
	return (true);
}

void Contact::displayContactInPhoneBook() {
	std::cout << "|" << std::setw(10) << this->index;
	for (int i = FirstName; i <= Nickname; i++)
	{
		std::cout << "|";
		if (this->informations[i].length() > 10)
			std::cout << this->informations[i].substr(0, 9) << ".";
		else
			std::cout << std::setw(10) << this->informations[i];
	}
	std::cout << "|" << std::endl;
}

void Contact::displayFullContactInformation(void) {
	std::cout << "# Contact Number " << this->index << std::endl;
	for (int i = FirstName; i <= Secret; i++)
		std::cout << "# " + Contact::fields_name[i] + ": " + this->informations[i] << std::endl;
}

Contact::~Contact() {
}
