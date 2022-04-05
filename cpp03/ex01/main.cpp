/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralena <ralena@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/02 17:16:26 by ralena            #+#    #+#             */
/*   Updated: 2022/04/02 17:16:27 by ralena           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main() {

    ScavTrap John("John");

    John.guardGate();

    ScavTrap Jim(John);
    Jim.takeDamage(20);
    ScavTrap Jane = Jim;
    std::cout << "Jane's hit points: " << Jane.getHitPoints() << "\n";
    Jane.takeDamage(30);
    std::cout << "Jane's hit points: " << Jane.getHitPoints() << "\n";

    return (0);
}