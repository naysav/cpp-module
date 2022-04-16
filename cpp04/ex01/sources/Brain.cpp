/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralena <ralena@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/05 19:33:09 by ralena            #+#    #+#             */
/*   Updated: 2022/04/05 19:35:57 by ralena           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/Brain.hpp"

Brain::Brain() {
	std::cout << "Default Brain-constructor called" << std::endl;
	return;
}

Brain::Brain(Brain const & src) {
	std::cout << "Copy Brain-constructor called" << std::endl;
	*this = src;
	return;
}

Brain::~Brain() {
	std::cout << "Brain-destructor called" << std::endl;
	return;
}

Brain &Brain::operator=(Brain const & rhs) {
	std::cout << "Assignement Brain-operator called" << std::endl;
	for (int i = 0; i < Brain::ideasNumber; i++)
		this->ideas[i] = rhs.ideas[i];
	return *this;
}