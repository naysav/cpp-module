/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralena <ralena@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/05 18:03:41 by ralena            #+#    #+#             */
/*   Updated: 2022/04/05 20:22:33 by ralena           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/Dog.hpp"
#include "includes/Cat.hpp"
#include "includes/WrongCat.hpp"

int	main(void) {
	Animal *animals[6];

	for (int i = 0; i < 6; i++) {
		if (i % 2)
			animals[i] = new Dog();
		else
			animals[i] = new Cat();
	}

	for (int i = 0; i < 6; i++)
		animals[i]->makeSound();

	for (int i = 0; i < 6; i++)
		delete animals[i];

	return 0;
}