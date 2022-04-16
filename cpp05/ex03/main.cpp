/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralena <ralena@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/09 19:04:38 by ralena            #+#    #+#             */
/*   Updated: 2022/04/09 19:14:10 by ralena           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string.h>

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

int main() {
	
	std::cout << "-----1-----" << std::endl;
	
	Intern					intern1;
	Form*   				form1;
	Bureaucrat				b1("Coop", 1);

	try	{
		form1 = intern1.makeForm("shrubbery request", "Form 1");
	} catch(const std::exception& err) {
		std::cerr << err.what() << std::endl ;
	}
	std::cout << *form1 << std::endl;
	try	{
		b1.signForm(*form1);
	} catch(const std::exception& err) {
		std::cerr << err.what() << std::endl ;
	}
	std::cout << *form1 << std::endl;
	
	try	{
		b1.executeForm(*form1);
	}
	catch(const std::exception& err) {
		std::cerr << err.what() << std::endl ;
	}
	delete form1;

	std::cout << "-----2-----" << std::endl;
	
	Intern					intern2;
	Form*   				form2;
	Bureaucrat				b2("Yuma", 1);

	try	{
		form2 = intern2.makeForm("robotomy request", "Form 2");
	} catch(const std::exception& err) {
		std::cerr << err.what() << std::endl ;
	}
	std::cout << *form2 << std::endl;
	try	{
		b2.signForm(*form2);
	}
	catch(const std::exception& err) {
		std::cerr << err.what() << std::endl ;
	}
	std::cout << *form2 << std::endl;
	
	try	{
		b2.executeForm(*form2);
	} catch(const std::exception& err) {
		std::cerr << err.what() << std::endl ;
	}
	delete form2;

	std::cout << "-----3-----" << std::endl;

	Intern					intern3;
	Form*   				form3;
	Bureaucrat				b3("Kicko", 1);

	try	{
		form3 = intern3.makeForm("presidential pardon", "Form 3");
	} catch(const std::exception& err) {
		std::cerr << err.what() << std::endl ;
	}
	std::cout << *form3 << std::endl;
	try	{
		b3.signForm(*form3);
	} catch(const std::exception& err) {
		std::cerr << err.what() << std::endl ;
	}
	std::cout << *form3 << std::endl;
	
	try {
		b3.executeForm(*form3);
	} catch(const std::exception& err) {
		std::cerr << err.what() << std::endl ;
	}
	delete form3;

	std::cout << "-----4-----" << std::endl;

	Intern					intern4;
	Form*   				form4;
	Bureaucrat				b4("Emma", 1);

	try {
		form4 = intern4.makeForm("unknown request", "noname");
	} catch(const std::exception& err) {
		std::cerr << err.what() << std::endl;
		return (0);
	}
	std::cout << *form4 << std::endl;
	try	{
		b4.signForm(*form4);
	} catch(const std::exception& err) {
		std::cerr << err.what() << std::endl ;
	}
	std::cout << *form4 << std::endl;
	
	try	{
		b4.executeForm(*form4);
	} catch(const std::exception& err) {
		std::cerr << err.what() << std::endl ;
	}
	delete form4;
	
	return (0);
}