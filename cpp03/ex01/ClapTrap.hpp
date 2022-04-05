/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralena <ralena@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/02 17:16:24 by ralena            #+#    #+#             */
/*   Updated: 2022/04/02 17:16:24 by ralena           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

class ClapTrap {
protected:
	std::string name;
	int hitPoints;
	int energyPoints;
	int attackDamage;
	ClapTrap(std::string name, int hp, int ep, int dmg);

public:
	ClapTrap();
	ClapTrap(std::string name);
	ClapTrap(const ClapTrap &other);
	~ClapTrap();

	virtual void attack(const std::string target);
	void takeDamage(unsigned int amount);
	void beRapaired(unsigned int amount);

	std::string getName() const;
	int getHitPoints() const;
	int getEnergyPoints() const;
	int getAttackDamage() const;
	
	ClapTrap &operator = (const ClapTrap &other);
};
