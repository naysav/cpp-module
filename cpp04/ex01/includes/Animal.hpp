/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralena <ralena@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/04 18:40:30 by ralena            #+#    #+#             */
/*   Updated: 2022/04/05 20:45:38 by ralena           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

class Animal {
protected:
	std::string type;
	Animal(std::string type);
public:
	Animal();
	Animal(const Animal &src);
	virtual ~Animal();
    
	virtual void makeSound() const;
	const std::string &getType() const;
    
    Animal &operator=(const Animal &rightAnimal);
};

std::ostream &operator<<(std::ostream &ostream, const Animal &animal);
