/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralena <ralena@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/06 17:28:24 by ralena            #+#    #+#             */
/*   Updated: 2022/03/06 17:28:25 by ralena           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <locale>

int	main(int argc, char const *argv[]) {
	if (argc == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	else
		for (int i = 1; i < argc; i++)
			for (size_t j = 0; j < strlen(argv[i]); j++)
				std::cout << (char)std::toupper(argv[i][j]);
	std::cout << std::endl;
	return (0);
}