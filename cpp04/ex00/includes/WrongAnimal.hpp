/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralena <ralena@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/05 17:59:55 by ralena            #+#    #+#             */
/*   Updated: 2022/04/05 19:08:00 by ralena           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

class WrongAnimal {
protected:
	std::string type;
public:
	WrongAnimal();
	WrongAnimal(const WrongAnimal &src);
	~WrongAnimal();
	
	void	makeSound() const ;
	const std::string	&getType() const ;
	
	WrongAnimal	&operator=(const WrongAnimal &rightAnimal);
};

std::ostream	&operator<<(std::ostream &ostream, const WrongAnimal &wrongAnimal);