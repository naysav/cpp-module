/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralena <ralena@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/12 19:06:32 by ralena            #+#    #+#             */
/*   Updated: 2022/03/13 15:57:00 by ralena           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

# include <iostream>
# include <string>
# include "Weapon.hpp"

class HumanB {
private:
	std::string name;
	const Weapon *weapon;
public:
	HumanB(std::string const &name);
	virtual ~HumanB();

	void setWeapon(const Weapon &weapon);
	void attack(void) const;
};

#endif