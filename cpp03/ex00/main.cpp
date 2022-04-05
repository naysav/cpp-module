/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralena <ralena@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/02 16:35:46 by ralena            #+#    #+#             */
/*   Updated: 2022/04/02 16:35:47 by ralena           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main() {

    ClapTrap John("John");
    ClapTrap Jim("Jim");

    John.attack("Jim");
    Jim.takeDamage(0);
    Jim.beRapaired(0);
    std::cout << "Jim's hit points: " << Jim.getHitPoints() << "\n";
    Jim.beRapaired(10);
    std::cout << "Jim's hit points: " << Jim.getHitPoints() << "\n";

    return (0);
}