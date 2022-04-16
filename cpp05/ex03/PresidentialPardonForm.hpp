/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralena <ralena@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/09 18:07:11 by ralena            #+#    #+#             */
/*   Updated: 2022/04/09 18:07:22 by ralena           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include <iostream>
# include "Bureaucrat.hpp"
# include "Form.hpp"

class Bureaucrat;

class PresidentialPardonForm : public Form {
public:
	PresidentialPardonForm();
	PresidentialPardonForm(std::string target);
	PresidentialPardonForm(const PresidentialPardonForm& other);
	~PresidentialPardonForm();

	virtual void execute(const Bureaucrat& executor) const;

	PresidentialPardonForm& operator=(const PresidentialPardonForm& other);
};