/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralena <ralena@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/19 17:16:14 by ralena            #+#    #+#             */
/*   Updated: 2022/03/19 17:46:36 by ralena           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

const int Fixed::bits = 8;

Fixed::Fixed() : value(0) {
    std::cout << "Default constructor called\n";
}

Fixed::Fixed(const Fixed &other) {
    value = other.value;
    std::cout << "Copy constructor called\n";
}

Fixed::~Fixed() {
    std::cout << "Destructor called\n";
}

Fixed &Fixed::operator= (const Fixed &other) {
    value = other.value;
    std::cout << "Copy assigment operator called\n";
    return (*this);
}

int Fixed::getRawBits() const {
    std::cout << "getRawBits member function called\n";
    return (value);
}

void Fixed::setRawBits(const int raw) {
    std::cout << "setRawBits member function called\n";
    value = raw;
}
