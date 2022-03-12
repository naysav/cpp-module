/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralena <ralena@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/06 17:28:17 by ralena            #+#    #+#             */
/*   Updated: 2022/03/06 17:28:18 by ralena           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PhoneBook_HPP
# define PhoneBook_HPP

# include <iostream>
# include <iomanip>
# include <string>
# include "Contact.hpp"

class PhoneBook {
private:
	Contact	contacts[8];
	int		amount;
public:
	PhoneBook();

	void	printStartMessage(void);
	void	addContact(void);
	void	searchContact(void);
	void	displayPhoneBook(void);

	virtual ~PhoneBook();
};

#endif
