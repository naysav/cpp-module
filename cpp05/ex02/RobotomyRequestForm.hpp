/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralena <ralena@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/09 18:11:10 by ralena            #+#    #+#             */
/*   Updated: 2022/04/09 18:12:10 by ralena           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include <iostream>
# include "Bureaucrat.hpp"
# include "Form.hpp"

class Bureaucrat;

class RobotomyRequestForm : public Form {
public:
	RobotomyRequestForm();
	RobotomyRequestForm(std::string target);
	RobotomyRequestForm(const RobotomyRequestForm& other);
	~RobotomyRequestForm();

	virtual void execute(const Bureaucrat& executor) const;

	RobotomyRequestForm& operator=(const RobotomyRequestForm& other);
};
