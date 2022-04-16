/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralena <ralena@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/05 18:06:12 by ralena            #+#    #+#             */
/*   Updated: 2022/04/05 19:05:12 by ralena           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/WrongCat.hpp"

WrongCat::WrongCat() {
	this->type = "WrongCat";
	std::cout << "Default WrongCat-constructor called" << std::endl;
	return;
}

WrongCat::WrongCat(WrongCat const &src) {
	std::cout << "Copy WrongCat-constructor called" << std::endl;
	*this = src;
	return;
}

WrongCat::~WrongCat() {
	std::cout << "WrongCat-destructor called" << std::endl;
	return;
}

void	WrongCat::makeSound() const {
	std::cout << "Wrong Meow!" << std::endl;
}