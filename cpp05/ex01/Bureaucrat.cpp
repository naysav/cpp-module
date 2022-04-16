/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralena <ralena@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/09 16:33:02 by ralena            #+#    #+#             */
/*   Updated: 2022/04/09 17:14:31 by ralena           ###   ########.fr       */
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

std::string Bureaucrat::getName(void) const {
	return (_name);
}

int	Bureaucrat::getGrade(void) const {
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

Bureaucrat& Bureaucrat::operator=(const Bureaucrat& other) {
	if (this == &other)
		return (*this);
	_grade = other._grade;
	return (*this);
}

std::ostream& operator<< (std::ostream& out, const Bureaucrat& object) {
	out << object.getName() << ", " << object.getGrade();
	return (out);
}

const char	*Bureaucrat::GradeTooHighException::what() const throw() {
	return ("Bureaucrat's grade too high");
}

const char	*Bureaucrat::GradeTooLowException::what() const throw() { 
	return ("Bureaucrat's grade too low");
}

void	Bureaucrat::signForm(Form &form) {
	try	{
		form.beSigned(*this);
		std::cout << _name << " signed " << form.getName() << std::endl;
	} catch(const std::exception& e) 	{
		std::cerr << _name << " couldn’t sign " << form.getName() 
		<< " because " << e.what() << std::endl;
	}
}