/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralena <ralena@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/05 18:15:29 by ralena            #+#    #+#             */
/*   Updated: 2022/04/05 20:15:18 by ralena           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/Dog.hpp"

Dog::Dog() {
	this->type = "Dog";
	std::cout << "Default Dog-constructor for Dog called" << std::endl;
}

Dog::Dog(Dog const & src) {
	std::cout << "Copy Dog-constructor called" << std::endl;
	*this = src;
}

Dog::~Dog() {
	std::cout << "Dog-destructor called" << std::endl;
}

void	Dog::makeSound( void ) const {
	std::cout << "Auf!" << std::endl;
}