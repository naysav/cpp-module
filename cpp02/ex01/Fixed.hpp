/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralena <ralena@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/19 17:57:45 by ralena            #+#    #+#             */
/*   Updated: 2022/04/02 12:21:02 by ralena           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <ostream>
#include <cmath>

class Fixed {
private:
    static const int    bits;
    int                 value;

public:
    Fixed();
    Fixed(const int raw);
    Fixed(const float raw);
    Fixed(const Fixed &other);
    ~Fixed();

    int getRawBits(void) const;
    void setRawBits(const int raw);

    float toFloat() const;
    int toInt() const;

    Fixed &operator = (const Fixed &other);
};

std::ostream &operator<<(std::ostream &out, const Fixed &f);
