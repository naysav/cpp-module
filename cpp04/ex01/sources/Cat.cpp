/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralena <ralena@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/05 18:04:57 by ralena            #+#    #+#             */
/*   Updated: 2022/04/05 20:16:57 by ralena           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/Cat.hpp"
#include "includes/Brain.hpp"

Cat::Cat() {
	this->type = "Cat";
	this->brain = new Brain();
	std::cout << "Default Cat-constructor called" << std::endl;
}

Cat::Cat(const Cat &other) : Animal(other) {
	this->brain = new Brain;
	this->brain->operator=(*other.brain);
}

Cat::~Cat() {
	std::cout << "Cat-destructor called" << std::endl;
	delete this->brain;
}

void	Cat::makeSound() const {
	std::cout << "Meow!" << std::endl;
}

Brain	*Cat::getBrain() const {
	return (this->brain);
}

Cat	&Cat::operator=( Cat const &rightCat) {
	std::cout << "Assignement operator for Cat called" << std::endl;
	this->type = rightCat.getType();
	*(this->brain) = *(rightCat.getBrain());
	return *this;
}