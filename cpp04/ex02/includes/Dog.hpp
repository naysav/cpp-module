/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralena <ralena@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/05 17:59:08 by ralena            #+#    #+#             */
/*   Updated: 2022/04/05 20:16:11 by ralena           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal {
private:
	Brain *brain;
public:
	Dog();
	Dog(const Dog &src);
	~Dog();
	
	virtual void 	makeSound() const;
	virtual Brain	*getBrain() const;
	
	Dog 			&operator = (const Dog &other);
};
