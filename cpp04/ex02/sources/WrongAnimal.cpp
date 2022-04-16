/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralena <ralena@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/05 18:05:42 by ralena            #+#    #+#             */
/*   Updated: 2022/04/05 18:39:34 by ralena           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/WrongAnimal.hpp"

WrongAnimal::WrongAnimal(): type(""){
	std::cout << "Default WrongAnimal-constructor called" << std::endl;
	return;
}

WrongAnimal::WrongAnimal(WrongAnimal const & src) {
	std::cout << "Copy WrongAnimal-constructor called" << std::endl;
	*this = src;
	return;
}

WrongAnimal::~WrongAnimal() {
	std::cout << "WrongAnimal-destructor called" << std::endl;
	return;
}

void 	WrongAnimal::makeSound() const {
	std::cout << "The WrongAnimal-sound" << std::endl;
}

const std::string 	&WrongAnimal::getType() const {
	return (this->type);
}

WrongAnimal 	&WrongAnimal::operator=(WrongAnimal const & rightAnimal) {
	std::cout << "Assignement WrongAnimal-operator called" << std::endl;
	this->type = rightAnimal.getType();
	return *this;
}

std::ostream	&operator<<(std::ostream &ostream, const WrongAnimal &wrongAnimal) {
	ostream << wrongAnimal.getType();;
	return ostream;
}
