/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralena <ralena@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/09 22:33:04 by ralena            #+#    #+#             */
/*   Updated: 2022/04/09 23:27:28 by ralena           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base	*generate(void) {
	int	i;

	srand(time(0));
	i = rand() % 3;
	switch (i) {
		case 0: 
			return (new A);
			break;
		case 1:
			return (new B);
			break;
		case 2:
			return (new C);
			break;
		default:;
	}
	return (0);
}

void identify(Base *p) {
	A	*a = dynamic_cast<A*>(p);
	B	*b = dynamic_cast<B*>(p);
	C	*c = dynamic_cast<C*>(p);

	if (a)
		std::cout << "A\n";
	if (b)
		std::cout << "B\n";
	if (c)
		std::cout << "C\n";
}

void identify(Base &p) {
	try	{
		A &a = dynamic_cast<A &>(p);
		(void)a;
		std::cout << "A\n";
		return ;
	}
	catch (std::bad_cast &e){}
	try	{
		B &b = dynamic_cast<B &>(p);
		(void)b;
		std::cout << "B\n";
		return ;
	} catch (std::bad_cast &e){}
	try	{
		C &c = dynamic_cast<C &>(p);
		(void)c;
		std::cout << "C\n";
		return ;
	}
	catch (std::bad_cast &e){}
}

int	main(void) {
	Base *p;

	p = generate();
	identify(p);
	identify(*p);
	delete p;
	return (0);
}