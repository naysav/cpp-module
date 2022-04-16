/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralena <ralena@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/09 18:11:00 by ralena            #+#    #+#             */
/*   Updated: 2022/04/09 18:11:40 by ralena           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() : Form() {}

PresidentialPardonForm::PresidentialPardonForm(std::string target) 
	: Form(target, 25, 5) {}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm& other) 
	: Form(other) {}

PresidentialPardonForm::~PresidentialPardonForm() {}

void	PresidentialPardonForm::execute(const Bureaucrat& object) const {
	if (Form::getSigned() == false)
		throw Form::IsNotSingException();
	if (object.getGrade() > Form::getGradeExecute())
		throw Form::GradeTooLowException();
	std::cout << "PresidentialPardonForm " << Form::getName() 
		<< " has been pardoned by Zafod Beeblebrox" << std::endl;
}

PresidentialPardonForm& PresidentialPardonForm::operator=(const PresidentialPardonForm &other) {
	Form::operator=(other);
	return (*this);
}