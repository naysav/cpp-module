/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralena <ralena@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/12 19:06:22 by ralena            #+#    #+#             */
/*   Updated: 2022/03/13 16:02:00 by ralena           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon() {
    this->type = "";
}

Weapon::Weapon(std::string const &type) {
    this->type = type;
}

Weapon::~Weapon(){
}

void Weapon::setType(std::string const &type) {
	this->type = type;
}

std::string const &Weapon::getType(void) const {
	return (this->type);
}