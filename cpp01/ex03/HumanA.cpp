/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralena <ralena@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/12 19:06:27 by ralena            #+#    #+#             */
/*   Updated: 2022/03/13 15:52:50 by ralena           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string const &name, const Weapon &weapon):
	name(name), weapon(weapon) {
}

HumanA::~HumanA() {
}

void HumanA::attack(void) const {
	std::cout << this->name << " attacks with his " << this->weapon.getType() << std::endl;
}