/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   StringReplacer.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralena <ralena@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/13 16:22:24 by ralena            #+#    #+#             */
/*   Updated: 2022/03/13 16:52:36 by ralena           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef StringReplacer_HPP
# define StringReplacer_HPP

# include <iostream>
# include <fstream>
# include <sstream>

class StringReplacer {
private:
	static std::string stringReplace(std::string const &line, std::string const &search, std::string const &replace);
public:
	StringReplacer();
	virtual ~StringReplacer();

	static void replace(std::string const &filename, std::string const &search, std::string const &replace);
};

#endif