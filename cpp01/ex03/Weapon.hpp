/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralena <ralena@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/12 19:06:25 by ralena            #+#    #+#             */
/*   Updated: 2022/03/13 16:02:02 by ralena           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

# include <iostream>
# include <string>

class Weapon {
private:
	std::string type;
public:
	Weapon();
	Weapon(std::string const &type);
	virtual ~Weapon();

	void setType(std::string const &type);
	std::string const &getType(void) const;
};

#endif