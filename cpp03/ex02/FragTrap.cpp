/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralena <ralena@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/02 17:26:52 by ralena            #+#    #+#             */
/*   Updated: 2022/04/02 17:26:54 by ralena           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap("Noname", 100, 100, 30) {
    std::cout << "FragTrap construstor was called for " << getName() << "\n";
}

FragTrap::FragTrap(std::string name) : ClapTrap(name, 100, 100, 30) {
    std::cout << "FragTrap construstor was called for " << getName() << "\n";
}

FragTrap::FragTrap(const FragTrap &other) : 
    ClapTrap(other.getName(), other.getHitPoints(), 
    other.getEnergyPoints(), other.getAttackDamage()) {
    std::cout << "FragTrap copy construstor was called\n";
}

FragTrap::~FragTrap() {
    std::cout << "FragTrap destrustor was called for " << getName() << "\n";
}

void FragTrap::highFivesGuys() const {
	std::cout << "highFivesGuys function was called by " << getName() << "\n";
	std::cout << getName() << ": high fives guys!!!\n";
}

FragTrap &FragTrap::operator = (const FragTrap &other) {
    std::cout << "FragTrap copy assignment operator was called\n";
    ClapTrap::operator=(other);
    return (*this);
}