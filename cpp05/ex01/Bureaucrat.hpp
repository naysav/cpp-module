/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralena <ralena@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/09 15:34:07 by ralena            #+#    #+#             */
/*   Updated: 2022/04/09 16:38:20 by ralena           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include <iostream>
# include <string.h>
# include "Form.hpp"

class Form;

class Bureaucrat {
	private:
		const std::string	_name;
		int					_grade;
		
	public:
		Bureaucrat();
		Bureaucrat(std::string name, int grade);
		Bureaucrat(const Bureaucrat& other);
		~Bureaucrat();

		std::string	getName(void) const;
		int			getGrade(void) const;

		void		gradeIncrement(void);
		void		gradeDecrement(void);
		void		signForm(Form& f);

		Bureaucrat& operator=(const Bureaucrat& other);

		class GradeTooHighException : public std::exception {
			public:
				virtual const char*	what() const throw ();
		};

		class GradeTooLowException : public std::exception {
			public:
				virtual const char*	what() const throw ();
		};
};

std::ostream& operator<< (std::ostream& out, const Bureaucrat& obj);
