/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralena <ralena@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/09 18:22:56 by ralena            #+#    #+#             */
/*   Updated: 2022/04/09 18:39:27 by ralena           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main(void) {

	std::cout << "-------ShrubberyCreationForm-1------" << std::endl;

	ShrubberyCreationForm	s1("DUUUUB");
	Bureaucrat				b1("Misha", 1);

	std::cout << s1 << std::endl;
	try	{
		s1.beSigned(b1);
	} catch(const std::exception& err) {
		std::cerr << err.what() << std::endl ;
	}
	std::cout << s1 << std::endl;

	try	{			
		s1.execute(b1);
	} catch (std::exception& err) {
		std::cerr << err.what() << std::endl ;
	}

	std::cout << "-------ShrubberyCreationForm-2------" << std::endl;


	ShrubberyCreationForm	s2("LEEEEEN");
	Bureaucrat				b2("Kolya", 1);

	std::cout << s2 << std::endl;
	try	{
		b2.signForm(s2);
	} catch(const std::exception& e) {
		std::cerr << e.what() << std::endl ;
	}
	std::cout << s2 << std::endl;

	try	{
		b1.executeForm(s2);
	} catch(const std::exception& e) {
		std::cerr << e.what() << std::endl ;
	}
	
	std::cout << "--------RobotomyRequestForm-1-------" << std::endl;

	RobotomyRequestForm		r3("Robot 1");
	Bureaucrat				b3("Alesha", 1);

	std::cout << r3 << std::endl;
	try	{
		r3.beSigned(b3);
	} catch(const std::exception& err) {
		std::cerr << err.what() << std::endl ;
	}
	std::cout << r3 << std::endl;

	try	{			
		r3.execute(b3);
	} catch (std::exception& err) {
		std::cerr << err.what() << std::endl ;
	}


	std::cout << "--------RobotomyRequestForm-2-------" << std::endl;

	RobotomyRequestForm		r4("Robot 2");
	Bureaucrat				b4("Vitalya", 150);

	std::cout << r4 << std::endl;
	try	{
		b4.signForm(r4);
	} catch(const std::exception& err) {
		std::cerr << err.what() << std::endl ;
	}
	std::cout << r4 << std::endl;
	
	try {
		b4.executeForm(r4);
	} catch(const std::exception& err) {
		std::cerr << err.what() << std::endl ;
	}

	RobotomyRequestForm		r5("Robot 3");
	Bureaucrat				b5("ZHIGANUL", 1);

	std::cout << r5 << std::endl;
	try	{
		b5.signForm(r5);
	} catch(const std::exception& err) {
		std::cerr << err.what() << std::endl ;
	}
	std::cout << r5 << std::endl;

	try	{
		b5.executeForm(r5);
	} catch(const std::exception& err) {
		std::cerr << err.what() << std::endl ;
	}

	std::cout << "-------PresidentialPardonForm-1-----" << std::endl;

	PresidentialPardonForm	p6("President 3");
	Bureaucrat				b6("YOrk", 1);

	std::cout << p6 << std::endl;
	try	{
		p6.beSigned(b6);
	} catch(const std::exception& err) {
		std::cerr << err.what() << std::endl;
	}
	std::cout << p6 << std::endl;

	try	{			
		p6.execute(b6);
	} catch (std::exception& err) {
		std::cerr << err.what() << std::endl;
	}

	std::cout << "-------PresidentialPardonForm-2-----" << std::endl;

	PresidentialPardonForm	p7("President 3");
	Bureaucrat				b7("Amogus", 150);

	std::cout << p7 << std::endl;
	try	{
		b7.signForm(p7);
	} catch(const std::exception& err) {
		std::cerr << err.what() << std::endl ;
	}
	std::cout << p7 << std::endl;

	try	{
		b1.executeForm(p7);
	} catch(const std::exception& err) {
		std::cerr << err.what() << std::endl ;
	}

	std::cout << "-------PresidentialPardonForm-3-----" << std::endl;

	PresidentialPardonForm	p8("President 3");
	Bureaucrat				b8("ABU", 1);

	std::cout << p8 << std::endl;
	try	{
		b8.signForm(p8);
	} catch(const std::exception& err) {
		std::cerr << err.what() << std::endl ;
	}
	std::cout << p8 << std::endl;
	
	try	{
		b8.executeForm(p8);
	} catch(const std::exception& err) {
		std::cerr << err.what() << std::endl ;
	}
	
	return (0);
}