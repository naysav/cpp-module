/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralena <ralena@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/09 17:01:25 by ralena            #+#    #+#             */
/*   Updated: 2022/04/09 17:27:17 by ralena           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int main(void) {
	try {
		Form	f1("Document 1", 151, 60);
	} catch (std::exception& err) {
		std::cerr << err.what() << std::endl;
	}

	std::cout << "-----------------------" << std::endl;

	try	{
		Form	f2("Document 2", 60, 0);
	} catch (std::exception& err) {
		std::cerr << err.what() << std::endl;
	}

	std::cout << "-----------------------" << std::endl;	

	Form		f3("Document 3", 70, 75);
	Bureaucrat	b1("Yamamoto", 1);
	std::cout << f3 << std::endl;
	try	{
		f3.beSigned(b1);
	} catch(const std::exception& err) {
		std::cerr << err.what() << std::endl;
	}
	std::cout << f3 << std::endl;

	std::cout << "-----------------------" << std::endl;

	Form		f4("Document 4", 70, 80);
	Bureaucrat	b2("Yoda", 100);
	std::cout << f4 << std::endl;
	try	{
		f4.beSigned(b2);
	} catch(const std::exception& err) {
		std::cerr << err.what() << std::endl;
	}
	std::cout << f4 << std::endl;

	std::cout << "-----------------------" << std::endl;

	Form		f5("Document 5", 70, 80);
	Bureaucrat	b3("Hikko", 1);
	std::cout << f5 << std::endl;
	try	{
		b3.signForm(f5);
	} catch(const std::exception& err) {
		std::cerr << err.what() << std::endl ;
	}
	std::cout << f5 << std::endl;

	std::cout << "-----------------------" << std::endl;

	Form		f6("Document 6", 70, 80);
	Bureaucrat	b4("Miyagi", 100);

	std::cout << f6 << std::endl;
	try {
		b4.signForm(f6);
	} catch(const std::exception& err) {
		std::cerr << err.what() << std::endl ;
	}
	std::cout << f6 << std::endl;
	
	return (0);
}