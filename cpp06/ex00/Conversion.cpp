/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Conversion.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralena <ralena@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/12 13:26:59 by rtracee           #+#    #+#             */
/*   Updated: 2022/04/16 13:58:25 by ralena           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Conversion.hpp"

Conversion::Conversion()
    : _symbol('\0'), _intNumber(0), _floatNumber(0.0f), _doubleNumber(0.0), _dot(0), _fSymbol(0), _minus(0), _isNan(false), _isNumber(false), _isNumberAfterDot(false)
{
}

Conversion::~Conversion() {
}

void    Conversion::handlingString(std::string const &input) {
    int i = 0;

    while (input[i]) {
        if ((input[i] >= '0' && input[i] <= '9') || (input[i] == '.' &&  input.length() != 1)
            || (input[i] == '-' && input[i + 1] && (input[i + 1] >= '0' && input[i + 1] <= '9'))) {
            if (i != 0)
                throw(Conversion::invalidInputException());
            this->_isNumber = true;
            while (input[i] && ((input[i] >= '0' && input[i] <= '9') 
				|| input[i] == '.' || input[i] == '-' || input[i] == 'f')) {
                if (input[i] == '-')
                    _minus++;
                else if (input[i] == '.') {
                    _dot++;
                    if (input[i + 1] && (input[i + 1] >= '0' && input[i + 1] <= '9')) {
                        _isNumberAfterDot = true;
                        if (input[i + 1] == '0' && ((input[i + 2] && !(input[i + 2] >= '0' && input[i + 2] <= '9'))
                            || !input[i + 2]))
                            _isNumberAfterDot = false;
                    }
                } else if (input[i] == 'f') {
                    _fSymbol++;
                    i++;
                    break ;
                }
                i++;
            }
            if (input[i] != '\0')
                throw(Conversion::invalidInputException());
            else
                --i;
        }
        i++;
    }
    if (_dot > 1 || _minus > 1 || (_fSymbol && _isNumber && !_dot))
        throw(Conversion::invalidInputException());
}

void    Conversion::conversionChar(std::string const &input) {
    _symbol = input[0];
    _intNumber = static_cast<long>(_symbol);
    _floatNumber = static_cast<float>(_symbol);
    _doubleNumber = static_cast<double>(_symbol);
}

void    Conversion::conversionInt(std::string const &input) {
    _intNumber = std::atof(input.c_str());
    if (_intNumber >= 0 && _intNumber <= 255)
        _symbol = static_cast<char>(_intNumber);
    _floatNumber = static_cast<float>(_intNumber);
    _doubleNumber = static_cast<double>(_intNumber);
}

void    Conversion::conversionFloat(std::string const &input) {
    _floatNumber = std::atof(input.c_str());
    _intNumber = static_cast<long>(_floatNumber);
    if (_intNumber >= 0 && _intNumber <= 255)
        _symbol = static_cast<char>(_intNumber);
    _doubleNumber = static_cast<double>(_floatNumber);
}

void    Conversion::conversionDouble(std::string const &input) {
    _doubleNumber = std::atof(input.c_str());
    _intNumber = static_cast<long>(_doubleNumber);
    if (_intNumber >= 0 && _intNumber <= 255)
        _symbol = static_cast<char>(_intNumber);
    _floatNumber = static_cast<float>(_doubleNumber);
}

void    Conversion::Conversionation(std::string const &input) {
    if (input.length() == 1 && _dot == 0 && _fSymbol == 0 && !_isNumber)
        this->conversionChar(input);
    else if (_dot == 0 && _fSymbol == 0 && _isNumber)
        this->conversionInt(input);
    else if ((_dot == 1 && _fSymbol == 1) || input == "-inff" || input == "+inff" || input == "nanf") {
        if (input == "-inff" || input == "+inff" || input == "nanf")
            _isNan = true;
        this->conversionFloat(input);
    } else if ((_dot == 1 && _fSymbol == 0) || input == "-inf" || input == "+inf" || input == "nan") {
        if (input == "-inf" || input == "+inf" || input == "nan")
            _isNan = true;
        this->conversionDouble(input);
    } else
        throw(Conversion::invalidInputException());
}

void    Conversion::printConversion() const {
    std::cout << "char: ";
    if (_symbol >= 32 && _symbol <= 126)
        std::cout << "\'" << _symbol << "\'" << std::endl;
    else if (_intNumber > INT_MAX || _intNumber < INT_MIN)
        std::cout << "impossible" << std::endl;
    else
        std::cout << "Non displayable" << std::endl;
    std::cout <<  "int: ";
    if (_intNumber > INT_MAX || _intNumber < INT_MIN)
        std::cout << "impossible" << std::endl;
    else
        std::cout << _intNumber << std::endl;
    std::cout << "float: " << _floatNumber;
    if (!_isNumberAfterDot && !_isNan)
        std::cout << ".0";
    std::cout << "f" << std::endl;
    std::cout << "double: " << _doubleNumber;
    if (!_isNumberAfterDot && !_isNan)
        std::cout << ".0";
    std::cout << std::endl;
}