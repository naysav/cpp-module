/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralena <ralena@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/04 18:42:58 by ralena            #+#    #+#             */
/*   Updated: 2022/04/05 20:12:33 by ralena           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal {
private:
	Brain	*brain;
public:
	Cat();
	Cat(const Cat &src);
	~Cat();
	
	virtual void	makeSound() const;
	virtual Brain	*getBrain() const;

	Cat				&operator=(Cat const & rightCat);
};
