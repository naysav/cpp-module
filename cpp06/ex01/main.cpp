/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralena <ralena@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/12 16:45:05 by rtracee           #+#    #+#             */
/*   Updated: 2022/04/16 14:24:07 by ralena           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serialization.hpp"

uintptr_t	serialize(Data *ptr) {
	return (reinterpret_cast<uintptr_t>(ptr));
}

Data	*deserialize(uintptr_t raw) {
	return (reinterpret_cast<Data *>(raw));
}

int	main(void) {
	struct Data	data;
	struct Data	*sar;
	uintptr_t	unsignedInt;

	data.i = 1234;
	data.c = '1';
	data.s = "1234";
	unsignedInt = serialize(&data);
	sar = deserialize(unsignedInt);
	if (sar == &data)
		std::cout << "cast" << std::endl;
	else
		std::cout << "not cast" << std::endl;
	std::cout << "data: " << &data << std::endl;
	std::cout << "sar: " << sar << std::endl;
	std::cout << "unsignedInt hex: " << std::hex << unsignedInt << std::endl;
	std::cout << "unsignedInt int: " << std::dec << unsignedInt << std::endl;
	std::cout << "int: " << sar->i << std::endl;
	std::cout << "char: " << sar->c << std::endl;
	std::cout << "string: " << sar->s << std::endl;
	return (0);
}