/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralena <ralena@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/09 18:12:17 by ralena            #+#    #+#             */
/*   Updated: 2022/04/09 18:14:01 by ralena           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() : Form() {}

RobotomyRequestForm::RobotomyRequestForm(std::string target) : Form(target, 72, 45) {}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& other) : Form(other) {}

RobotomyRequestForm::~RobotomyRequestForm() {}

void	RobotomyRequestForm::execute(const Bureaucrat& obj) const {
	if (Form::getSigned() == false)
		throw Form::IsNotSingException();
	if (obj.getGrade() > Form::getGradeExecute())
		throw Form::GradeTooLowException();

	std::cout << "Object of RobotomyRequestForm : " << " Makes some drilling noises " << std::endl;
	std::cout << Form::getName() << " is been robotomized successfully 50\% of the time" << std::endl;
}

RobotomyRequestForm& RobotomyRequestForm::operator=(const RobotomyRequestForm &other){
	Form::operator=(other);
	return (*this);
}
