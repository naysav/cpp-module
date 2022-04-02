/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralena <ralena@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/19 18:17:45 by ralena            #+#    #+#             */
/*   Updated: 2022/04/02 12:28:30 by ralena           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <ostream>
#include <cmath>

class Fixed {
private:
	static const int	bits;
	int					value;
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

	static Fixed &min(Fixed &first, Fixed &second);
	static const Fixed &min(const Fixed &first, const Fixed &second);
	static Fixed &max(Fixed &first, Fixed &second);
	static const Fixed &max(const Fixed &first, const Fixed &second);

	Fixed &operator = (const Fixed &other);
	bool operator > (const Fixed &other) const;
	bool operator < (const Fixed &other) const;
	bool operator >= (const Fixed &other) const;
	bool operator <= (const Fixed &other) const;
	bool operator == (const Fixed &other) const;
	bool operator != (const Fixed &other) const;

	Fixed operator + (const Fixed &other);
	Fixed operator - (const Fixed &other);
	Fixed operator * (const Fixed &other);
	Fixed operator / (const Fixed &other);

	Fixed &operator ++ ();
	Fixed operator ++ (int);
	Fixed &operator -- ();
	Fixed operator -- (int);
};

std::ostream &operator<<(std::ostream &out, const Fixed &f);