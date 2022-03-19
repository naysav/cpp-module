/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   StringReplacer.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralena <ralena@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/13 17:29:15 by ralena            #+#    #+#             */
/*   Updated: 2022/03/13 17:29:16 by ralena           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "StringReplacer.hpp"

StringReplacer::StringReplacer(){
}

StringReplacer::~StringReplacer(){
}

std::string StringReplacer::stringReplace(std::string const &line, std::string const &search, std::string const &replace) {
	std::stringstream ss;
	size_t lineLength(line.length());
	size_t searchLength(search.length());

	for (size_t i = 0, j; i < lineLength; i++) {
		j = 0;
		while (line[i + j] == search[j] && j < searchLength)
			j++;
		if (j == searchLength) {
			ss << replace;
			i += (j - 1);
		}
		else
			ss << line[i];
	}
	return (ss.str());
}

void StringReplacer::replace(std::string const &filename, std::string const &search, std::string const &replace) {
	std::ifstream inFile;
	std::ofstream outFile;
	std::string line;

	if (filename.length() == 0)
		throw "filename is empty.";
	else if (search.length() == 0)
		throw "search string is empty.";
	else if (replace.length() == 0)
		throw "replace string is empty.";
	inFile.open(filename);
	if (!inFile.is_open())
		throw "input File couldn't be opened.";
	outFile.open(filename + ".replace", std::ios::trunc);
	if (!outFile.is_open())
		throw "output File couldn't be opened.";
	while (std::getline(inFile, line)) {
		outFile << StringReplacer::stringReplace(line, search, replace);
		if (!inFile.eof())
			outFile << '\n';
    }
	inFile.close();
	outFile.close();
}