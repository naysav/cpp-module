/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralena <ralena@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/06 17:28:08 by ralena            #+#    #+#             */
/*   Updated: 2022/03/19 14:54:13 by ralena           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* newZombie(std::string name);
void randomChump(std::string name);

int	main(void)
{
	Zombie z1("Garry");
	std::cout << "Instance of Zombie class initiated with name \"Garry\"."<< std::endl;
	z1.announce();
	
	std::cout << "Instance of Zombie class initiated with name \"Peter\" by newZombie() method." << std::endl;
	Zombie *z2 = newZombie("Peter");
	z2->announce();

	std::cout << "Instance of Zombie class initiated with name \"Thomas\" by randomChump() method." << std::endl;
	randomChump("Thomas");
	delete z2;
	return (0);
}
