/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralena <ralena@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/06 17:28:05 by ralena            #+#    #+#             */
/*   Updated: 2022/03/06 17:28:06 by ralena           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <iostream>
# include <iomanip>
# include <string>

class Contact {
private:
	int					index;
	static std::string	fields_name[5];
	std::string			informations[5];

	enum Field {
		FirstName = 0,
		LastName,
		Nickname,
		Phone,
		Secret
	};
public:
	Contact();

	void 	decrementIndex();
	bool	setInformation(int index);
	void	displayContactInPhoneBook(void);
	void	displayFullContactInformation(void);

	virtual ~Contact();
};

#endif