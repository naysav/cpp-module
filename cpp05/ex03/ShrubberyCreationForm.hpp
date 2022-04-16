/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralena <ralena@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/09 18:15:19 by ralena            #+#    #+#             */
/*   Updated: 2022/04/09 18:15:31 by ralena           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include <iostream>
# include <fstream>
# include "Bureaucrat.hpp"
# include "Form.hpp"

class Bureaucrat;

class ShrubberyCreationForm : public Form {
public:
	ShrubberyCreationForm();
	ShrubberyCreationForm(std::string target);
	ShrubberyCreationForm(const ShrubberyCreationForm& other);
	~ShrubberyCreationForm();

	virtual void execute(const Bureaucrat& executor) const;

	ShrubberyCreationForm& operator=(const ShrubberyCreationForm& other);
};