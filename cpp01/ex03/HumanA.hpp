/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralena <ralena@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/12 19:06:29 by ralena            #+#    #+#             */
/*   Updated: 2022/03/12 19:12:31 by ralena           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

# include <iostream>
# include <string>
# include "Weapon.hpp"

class HumanA {
private:
	std::string name;
	const Weapon &weapon;
public:
	HumanA(std::string const &name, const Weapon &weapon);
	virtual ~HumanA();

	void attack(void) const;
};

#endif