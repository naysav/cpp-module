/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralena <ralena@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/09 16:30:35 by ralena            #+#    #+#             */
/*   Updated: 2022/04/09 16:56:51 by ralena           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include "Bureaucrat.hpp"

class Bureaucrat;

class Form {
private:
	const std::string	_name;
	const int			_gradeSign;
	const int			_gradeExecute;
	bool				_isSigned;
public:
	Form();
	Form(const std::string name, const int sign, const int execute);
	Form(const Form& other);
	virtual ~Form();
	
	std::string	getName(void) const;
	int			getGradeSign(void) const;
	int			getGradeExecute(void) const;
	bool		getSigned(void) const;
	
	void		beSigned(const Bureaucrat& obj);

	Form& 		operator=(const Form& other);

	class GradeTooHighException : public std::exception {
		public:
		virtual const char* what() const throw();
	};

	class GradeTooLowException : public std::exception {
		public:
			virtual const char* what() const throw();
	};
};

std::ostream& operator<<(std::ostream& out, const Form& obj);