/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralena <ralena@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/09 18:15:38 by ralena            #+#    #+#             */
/*   Updated: 2022/04/09 18:22:30 by ralena           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() : Form() {}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) 
	: Form(target, 145, 137) {}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& other) 
	: Form(other) {}

ShrubberyCreationForm::~ShrubberyCreationForm() {}

ShrubberyCreationForm& ShrubberyCreationForm::operator=(const ShrubberyCreationForm &other) {
	this->Form::operator=(other);
	return (*this);
}

void	ShrubberyCreationForm::execute(const Bureaucrat& obj) const {
	if (Form::getSigned() == false)
		throw Form::IsNotSingException();
	if (obj.getGrade() > Form::getGradeExecute())
		throw Form::GradeTooLowException();
	std::string	name_file = Form::getName();
	name_file = name_file + "_shrubbery";
	std::ofstream new_file(name_file.c_str());
	if (!new_file.is_open()) 	{
		std::cout << "Coulnd't open the output file" << std::endl;
		return ;
	}		

	new_file << "	___________¶¶¶¶¶¶_¶¶¶¶¶¶¶¶" << std::endl;
	new_file << "__________¶_____¶¶________¶" << std::endl;
	new_file << "________¶¶¶_______________ ¶¶¶¶¶¶¶" << std::endl;
	new_file << "________¶_______________________¶¶¶" << std::endl;
	new_file << "_______ ¶¶____¶__________________ ¶" << std::endl;
	new_file << "______¶¶¶____¶¶¶¶¶¶¶¶¶____________¶¶¶" << std::endl;
	new_file << "______¶¶______¶¶¶¶¶_______ ¶¶_______¶¶_¶¶" << std::endl;
	new_file << "_____¶¶¶¶¶¶_______________¶¶__¶_¶¶___¶¶¶¶¶¶" << std::endl;
	new_file << "___¶¶¶__¶¶¶¶__¶¶¶_________¶¶¶¶¶¶¶____¶¶___¶¶¶" << std::endl;
	new_file << "___¶______¶¶¶_¶_¶__¶__¶_¶¶¶________________¶¶¶" << std::endl;
	new_file << "__ ¶________¶_¶_¶¶¶¶¶¶¶¶¶¶_¶¶________________¶¶" << std::endl;
	new_file << "___¶¶____¶¶¶¶_¶_¶¶¶_¶¶¶¶_¶_¶¶¶¶¶¶¶¶¶¶________¶¶" << std::endl;
	new_file << "__¶¶¶¶___¶¶¶¶¶¶¶¶___¶¶¶_¶__¶¶¶____¶¶¶¶______¶¶¶" << std::endl;
	new_file << "_¶¶¶_¶¶¶¶¶_¶¶¶¶¶¶_¶¶_¶¶¶____¶¶¶¶¶¶¶¶________¶¶¶" << std::endl;
	new_file << "¶¶_____¶¶¶__¶¶_¶¶¶¶¶__¶¶___¶¶¶¶¶¶_¶_____¶¶¶___¶¶" << std::endl;
	new_file << "¶_____¶¶¶___¶_¶_¶¶¶___¶¶_¶¶__¶__¶¶¶¶¶__¶¶¶_____¶¶" << std::endl;
	new_file << "¶¶___¶¶¶¶¶¶_¶¶¶___¶____¶¶¶__¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶____¶" << std::endl;
	new_file << "_¶¶__¶¶¶¶¶¶¶¶¶¶¶¶_¶¶¶__¶¶__¶¶¶¶¶¶¶__¶¶¶¶__¶____¶¶¶" << std::endl;
	new_file << "__ ¶¶¶¶_____¶_¶¶¶______¶¶___¶¶_____¶¶¶_________¶" << std::endl;
	new_file << "____________¶¶¶__¶¶_____¶___¶¶¶_¶¶¶¶¶¶¶¶¶¶¶___¶¶" << std::endl;
	new_file << "___¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶_¶¶_¶¶_¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶" << std::endl;
	new_file << "__ ¶_____¶¶¶¶¶___¶¶¶_¶¶__¶¶¶¶___¶¶¶________¶¶¶" << std::endl;
	new_file << "__ ¶¶____¶¶_______¶¶_¶¶___¶¶¶¶_¶¶¶¶¶_____¶¶¶" << std::endl;
	new_file << "__ ¶_____¶___¶_¶¶¶_¶_¶¶___¶¶_¶¶¶__¶¶¶____¶¶" << std::endl;
	new_file << "__ ¶¶_______¶¶¶¶__¶¶______ ¶________¶¶¶¶¶¶" << std::endl;
	new_file << "___¶__¶¶¶¶¶¶¶_____¶___¶¶¶__¶__________¶¶¶" << std::endl;
	new_file << "___¶¶¶¶¶¶¶¶¶_____¶¶__¶¶¶¶¶_¶¶" << std::endl;
	new_file << "________________¶¶___¶¶¶¶___¶¶" << std::endl;
	new_file << "_______________¶¶____¶¶¶¶___¶¶" << std::endl;
	new_file << "____________¶¶¶¶_____¶¶_____¶¶" << std::endl;
	new_file << "___________ ¶¶_______¶¶_____¶¶" << std::endl;
	new_file << "__________¶¶¶___¶¶___¶¶_____¶¶" << std::endl;
	new_file << "________¶¶¶¶____¶¶___¶______¶¶" << std::endl;
	new_file << "______ ¶¶¶¶¶____¶______¶¶____¶¶" << std::endl;
	new_file << "_____¶¶¶¶¶¶¶¶_¶¶¶_¶____¶¶_¶___¶¶" << std::endl;
	new_file << "___¶¶¶¶¶¶¶¶¶¶¶K¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶" << std::endl;
	new_file << "__ ¶¶¶¶¶¶¶¶¶¶¶¶¶¶_¶¶¶¶¶¶____¶¶¶¶¶_¶¶¶" << std::endl;

	std::cout << "ShrubberyCreationForm created new file with DUB" << std::endl;
}
