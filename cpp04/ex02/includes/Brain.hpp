/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralena <ralena@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/05 19:31:05 by ralena            #+#    #+#             */
/*   Updated: 2022/04/05 19:34:57 by ralena           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

class Brain {
private:
	static const int	ideasNumber = 100;
public:
    std::string		ideas[Brain::ideasNumber];
    
	Brain();
	Brain(const Brain &src);
	~Brain();
    
	Brain	&operator=(const Brain &other);
};