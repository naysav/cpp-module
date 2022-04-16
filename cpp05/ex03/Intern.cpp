/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralena <ralena@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/09 19:01:25 by ralena            #+#    #+#             */
/*   Updated: 2022/04/09 19:03:52 by ralena           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern() {}

Intern::~Intern() {}

Form*	Intern::create_ShrubberyCreation(const std::string target_name) {
	return (new ShrubberyCreationForm(target_name));
}

Form*	Intern::create_RobotomyRequest(const std::string target_name) {
	return (new RobotomyRequestForm(target_name));
}

Form*	Intern::create_PresidentialPardon(const std::string target_name) {
	return (new PresidentialPardonForm(target_name));
}

Form*	Intern::makeForm(const std::string form_name, const std::string target_name) {
	Form*	(Intern::*makeFormChoice[3])(const std::string) = {
		&Intern::create_ShrubberyCreation, 
		&Intern::create_RobotomyRequest, 
		&Intern::create_PresidentialPardon
	};
	const std::string	availibal_forms[3] = {"shrubbery request", "robotomy request", "presidential pardon"};

	Form*	need = NULL;
	for (size_t index = 0; index < 3; index++) {
		if (availibal_forms[index] == form_name) 		{
			need = (this->*makeFormChoice[index])(target_name);
			std::cout << "Intern creates " << need->getName() << std::endl;
			return (need);
		}
	}
	throw FormNameException();
}

const char* Intern::FormNameException::what() const throw() {
	return ("Form does not exist");
}