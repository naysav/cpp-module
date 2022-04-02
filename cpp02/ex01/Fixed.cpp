/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralena <ralena@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/19 17:57:48 by ralena            #+#    #+#             */
/*   Updated: 2022/03/19 18:29:56 by ralena           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

const int Fixed::bits = 8;

Fixed::Fixed() : value(0) {
    std::cout << "Default constructor called\n";
}

Fixed::Fixed(const int raw) : value(raw << bits) {
    std::cout << "Int constructor called\n";
}

Fixed::Fixed(const float raw) {
    std::cout << "Float constructo r called\n";
    int pow = 1 << bits;
    value = (int)roundf(raw * pow);
}

Fixed::Fixed(const Fixed &other) {
    value = other.value;
    std::cout << "Copy constructor called\n";
}

Fixed::~Fixed() {
    std::cout << "Destructor called\n";
}

int Fixed::getRawBits()const {
    std::cout << "getRawBits() called\n";
    return (value);
}

void Fixed::setRawBits(const int raw) {
    std::cout << "setRawBits(int raw) called\n";
    value = raw;
}

int Fixed::toInt() const {
    return (value >> bits);
}

float Fixed::toFloat() const {
    int pow = 1 << bits;
    return ((float)value / (float)pow);
}

Fixed &Fixed::operator= (const Fixed  &other) {
    value = other.value;
    std::cout << "Copy assigment operator called\n";
    return (*this);
}

std::ostream &operator<<(std::ostream &out, const Fixed &f) {
    out << f.toFloat();
    return (out);
}