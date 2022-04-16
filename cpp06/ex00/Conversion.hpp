/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Conversion.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralena <ralena@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/09 20:51:14 by ralena            #+#    #+#             */
/*   Updated: 2022/04/16 13:58:25 by ralena           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include <iostream>
# include <climits>
# include <stdlib.h>

class Conversion {
private:
    char _symbol;
    long _intNumber;
    float _floatNumber;
    double _doubleNumber;
    int _dot;
    int _fSymbol;
    int _minus;
    bool _isNan;
    bool _isNumber;
    bool _isNumberAfterDot;
public:
    Conversion();
    ~Conversion();
	
    void    handlingString(std::string const &input);
    void    Conversionation(std::string const &input);
    void    conversionChar(std::string const &input);
    void    conversionInt(std::string const &input);
    void    conversionFloat(std::string const &input);
    void    conversionDouble(std::string const &input);
    void    printConversion() const;
	
    class invalidInputException : public std::exception {
        public:
            virtual const char* what() const throw() {
                return("Error: invalid argument");
            }
    };
};