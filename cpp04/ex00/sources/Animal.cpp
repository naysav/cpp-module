/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralena <ralena@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/05 18:04:42 by ralena            #+#    #+#             */
/*   Updated: 2022/04/05 20:36:50 by ralena           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/Animal.hpp"

Animal::Animal(): type("") {
	std::cout << "Default Animal-constructor called" << std::endl;
}

Animal::Animal(std::string type) : type(type) {
	std::cout << "Animal-constructor called" << std::endl;
}

Animal::Animal(Animal const & src) {
	std::cout << "Copy Animal-constructor called" << std::endl;
	*this = src;
}

Animal::~Animal() {
	std::cout << "Animal-destructor called" << std::endl;
}

void	Animal::makeSound() const {
	std::cout << "Animal-sound"	<< std::endl;
}

const std::string	&Animal::getType() const {
	return (this->type);
}

Animal &	Animal::operator=(Animal const &rightAnimal) {
	std::cout << "Assignement Animal-operator called" << std::endl;
	this->type = rightAnimal.getType();
	return *this;
}

std::ostream	&operator<<(std::ostream &ostream, const Animal &animal) {
	ostream << animal.getType();
	return ostream;
}
