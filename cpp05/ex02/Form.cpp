#include "Form.hpp"

Form::Form()
	:	_name("unnamed"),
		_gradeSign(150),
		_gradeExecute(150),
		_isSigned(false) {}

Form::Form(const std::string name, const int sign, const int execute)
	:	_name(name),
		_gradeSign(sign),
		_gradeExecute(execute),
		_isSigned(false) {
	if (sign < 1 || execute < 1)
		throw Bureaucrat::GradeTooHighException();
	if (sign > 150 || execute > 150)
		throw Bureaucrat::GradeTooLowException();
}

Form::Form(const Form& other)
	:	_name(other._name),
		_gradeSign(other._gradeSign),
		_gradeExecute(other._gradeExecute),
		_isSigned(other._isSigned) {}

Form::~Form() {}

std::string	Form::getName(void) const {
	return (_name);
}

int			Form::getGradeSign(void) const {
	return (_gradeSign);
}

int			Form::getGradeExecute(void) const {
	return (_gradeExecute);
}

bool		Form::getSigned(void) const {
	return (_isSigned);
}

Form&		Form::operator=(const Form& other) {
	if (this == &other)
		return (*this);
	_isSigned = other._isSigned;
	
	return (*this);
}

std::ostream& operator<<(std::ostream& out, const Form& obj) {
	out	<< obj.getName() << ", " << obj.getGradeSign() << ", "
		<< obj.getGradeExecute() << ", isSigned = " << obj.getSigned();
	return (out);
}

const char*	Form::GradeTooHighException::what() const throw() {
	return ("Form's grade too high");
}

const char*	Form::GradeTooLowException::what() const throw() {
	return ("Form's grade too low");
}

void	Form::beSigned(const Bureaucrat& obj) {
	if (obj.getGrade() < _gradeSign)
		_isSigned = true;
	else
		throw Form::GradeTooLowException();
}

const char*	Form::IsNotSingException::what() const throw() {
	return ("Form is not singed");
}