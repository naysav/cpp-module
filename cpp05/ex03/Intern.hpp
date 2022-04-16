/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralena <ralena@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/09 19:00:19 by ralena            #+#    #+#             */
/*   Updated: 2022/04/09 19:00:46 by ralena           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include <iostream>
# include <string.h>

# include "Form.hpp"
# include "ShrubberyCreationForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "PresidentialPardonForm.hpp"

class Intern {
public:
	Intern();
	~Intern();
	
	Form*	create_ShrubberyCreation(const std::string target_name);
	Form*	create_RobotomyRequest(const std::string target_name);
	Form*	create_PresidentialPardon(const std::string target_name);
	Form*	makeForm(const std::string form_name, std::string target_name);

	class FormNameException : public std::exception {
		public:
			const char* what() const throw ();
	};
};