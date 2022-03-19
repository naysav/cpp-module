/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralena <ralena@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/06 17:28:08 by ralena            #+#    #+#             */
/*   Updated: 2022/03/12 18:51:34 by ralena           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <iostream>
# include <string>

int	main(void) {
	std::string string = "HI THIS IS BRAIN";
	std::string *stringPTR = &string;
	std::string &stringREF = string;

	std::cout << "The memory adress of the string variable: " << &string << "\n";
	std::cout << "The memory adress held by stringPTR: " << stringPTR << "\n";
	std::cout << "The memory adress held by stringREF: " << &stringREF << "\n";

	std::cout << "The value of the string: " << string << "\n";
	std::cout << "The value pointed to by stringPTR: " << *stringPTR << "\n";
	std::cout << "The value pointed to by stringREF: " << stringREF << "\n";
	return (0);
}
