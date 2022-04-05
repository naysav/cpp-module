/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralena <ralena@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/02 17:27:06 by ralena            #+#    #+#             */
/*   Updated: 2022/04/02 17:27:07 by ralena           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main() {

	std::cout << "ScavTrap:\n\n";

	{
		ScavTrap John("John");
		John.guardGate();
		ScavTrap Jim(John);
		Jim.takeDamage(20);
		ScavTrap Jane = Jim;
		std::cout << "Jane's hit points: " << Jane.getHitPoints() << "\n";
		Jane.takeDamage(30);
		std::cout << "Jane's hit points: " << Jane.getHitPoints() << "\n";
	}

	std::cout << "\nFragTrap:\n\n";

	{
		FragTrap John("John");
		John.highFivesGuys();
		FragTrap Jim(John);
		Jim.takeDamage(20);
		FragTrap Jane = Jim;
		std::cout << "Jane's hit points: " << Jane.getHitPoints() << "\n";
		Jane.takeDamage(30);
		std::cout << "Jane's hit points: " << Jane.getHitPoints() << "\n";
	}

	return (0);
}