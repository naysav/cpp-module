/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralena <ralena@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/09 21:45:01 by ralena            #+#    #+#             */
/*   Updated: 2022/04/16 13:58:25 by ralena           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Conversion.hpp"

int main(int argc, char **argv) {
    Conversion conv;

    try {
        if (argc != 2)
            std::cout << "Error: wrong number arguments" << std::endl;
        std::string input = static_cast<std::string>(argv[1]);
        conv.handlingString(input);
        conv.Conversionation(input);
        conv.printConversion();
    } catch(const std::exception& e) {
        std::cerr << e.what() << '\n';
    }

    return (0);
}