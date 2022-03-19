/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralena <ralena@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/13 16:21:11 by ralena            #+#    #+#             */
/*   Updated: 2022/03/13 17:11:10 by ralena           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "StringReplacer.hpp"

int main(int argc, char const *argv[]) {
	if (argc != 4)
		std::cout << "Error: wrong number of arguments." << std::endl;
	else {
		try {
			StringReplacer::replace(argv[1], argv[2], argv[3]);
		} catch(char const *e) {
			std::cerr << "Error: " << e << std::endl;
		}
	}
	return (0);
}