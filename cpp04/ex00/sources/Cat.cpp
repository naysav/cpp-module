/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralena <ralena@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/05 18:04:57 by ralena            #+#    #+#             */
/*   Updated: 2022/04/05 20:15:07 by ralena           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/Cat.hpp"

Cat::Cat() {
	this->type = "Cat";
	std::cout << "Default Cat-constructor called" << std::endl;
}

Cat::Cat(Cat const & src) {
	std::cout << "Copy Cat-constructor called" << std::endl;
	*this = src;
}

Cat::~Cat() {
	std::cout << "Cat-destructor called" << std::endl;
}

void	Cat::makeSound() const {
	std::cout << "Meow!" << std::endl;
}