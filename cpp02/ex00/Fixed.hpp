/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralena <ralena@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/19 17:16:17 by ralena            #+#    #+#             */
/*   Updated: 2022/03/19 17:16:18 by ralena           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

class Fixed {
private:
    static const int    bits;
    int                 value;
public:
    Fixed();
    Fixed(const Fixed &other);
    ~Fixed();

    Fixed &operator = (const Fixed &other);

    int getRawBits(void)const;
    void setRawBits(const int raw);
};
