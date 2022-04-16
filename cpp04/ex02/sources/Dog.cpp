/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralena <ralena@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/05 18:15:29 by ralena            #+#    #+#             */
/*   Updated: 2022/04/05 20:17:23 by ralena           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/Dog.hpp"
#include "includes/Brain.hpp"

Dog::Dog() {
	this->type = "Dog";
	this->brain = new Brain();
	std::cout << "Default Dog-constructor for Dog called" << std::endl;
}

Dog::Dog(const Dog &other) : Animal(other) {
	brain = new Brain;
	brain->operator=(*other.brain);
}

Dog::~Dog() {
	std::cout << "Dog-destructor called" << std::endl;
	delete this->brain;
}

void	Dog::makeSound( void ) const {
	std::cout << "Auf!" << std::endl;
}

Brain	*Dog::getBrain() const {
	return (this->brain);
}

Dog		&Dog::operator=(Dog const &rightDog) {
	std::cout << "Assignement operator for Dog called" << std::endl;
	this->type = rightDog.getType();
	*(this->brain) = *(rightDog.getBrain());
	return *this;
}