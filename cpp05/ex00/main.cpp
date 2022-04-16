/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralena <ralena@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/09 15:34:10 by ralena            #+#    #+#             */
/*   Updated: 2022/04/09 15:57:26 by ralena           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main(void) {
	
	Bureaucrat	bureaucrat1("First", 100);
	Bureaucrat	bureaucrat2(bureaucrat1);
	Bureaucrat	bureaucrat3 = bureaucrat1;

	std::cout << bureaucrat1 << std::endl;
	std::cout << bureaucrat2 << std::endl;
	std::cout << bureaucrat3 << std::endl;
	
	try {
		Bureaucrat	a("Josh", 151);
	} catch (std::exception& e) {
		std::cerr << e.what() << std::endl ;
	}
	
	try	{
		Bureaucrat	b("Jim", 0);
	} catch (std::exception& e) {
		std::cerr << e.what() << std::endl ;
	}

	try {
		Bureaucrat	c("Ventura", 1);
		
		std::cout << c << std::endl;
		c.gradeIncrement();
	} catch (std::exception& e){
		std::cerr << e.what() << std::endl ;
	}

	try	{
		Bureaucrat	d("Eric", 150);

		std::cout << d << std::endl;
		d.gradeDecrement();
	} catch (std::exception& e) {
		std::cerr << e.what() << std::endl ;
	}
	
	return (0);
}