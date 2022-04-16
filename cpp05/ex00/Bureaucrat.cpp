/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralena <ralena@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/09 15:34:04 by ralena            #+#    #+#             */
/*   Updated: 2022/04/09 16:43:42 by ralena           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : _name("Jonh") {
	_grade = 150;
}

Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name) {
	if (grade < 1)
		throw Bureaucrat::GradeTooHighException();
	if (grade > 150)
		throw Bureaucrat::GradeTooLowException();
	else
		_grade = grade;
}

Bureaucrat::Bureaucrat(const Bureaucrat& other) : _name(other._name) {
	_grade = other._grade;
}

Bureaucrat::~Bureaucrat() {}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat& other) {
	if (this == &other)
		return (*this);
	_grade = other._grade;
	return (*this);
}

std::string Bureaucrat::getName(void) const {
	return (_name);
}

int		Bureaucrat::getGrade(void) const {
	return (_grade);
}

void	Bureaucrat::gradeIncrement(void) {
	if (_grade == 1)
		throw Bureaucrat::GradeTooHighException();
	else
		_grade--;
}

void	Bureaucrat::gradeDecrement(void) {
	if (_grade == 150)
		throw Bureaucrat::GradeTooLowException();
	else
		_grade++;
}

std::ostream& operator<< (std::ostream& out, const Bureaucrat& object) {
	out << object.getName() << ", bureaucrat grade " << object.getGrade();
	return (out);
}

const char	*Bureaucrat::GradeTooHighException::what() const throw() {
	return ("Bureaucrat's grade too high");
}

const char	*Bureaucrat::GradeTooLowException::what() const throw() { 
	return ("Bureaucrat's grade too low");
}
