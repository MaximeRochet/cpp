/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrochet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/27 12:23:54 by mrochet           #+#    #+#             */
/*   Updated: 2022/06/28 15:32:26 by mrochet          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "form.hpp"

Form::Form() : _name("Default"), _sign(false), _grade_sign(1), _grade_exec(1)
{ return ; }

Form::Form(std::string name) : _name(name), _sign(false), _grade_sign(1), _grade_exec(1)
{ return ; }

Form::Form(std::string name, int sign, int exec) : _name(name), _sign(false), _grade_sign(sign), _grade_exec(exec)
{
	if(sign < 1 || exec < 1)
		throw Bureaucrat::GradeTooHighException();
	else if(sign > 150 || sign > 150)
		throw Bureaucrat::GradeTooLowException();
	return ; 
}

Form::Form(Form const &copy):_name(copy.getName()), _sign(copy.getSign()), _grade_sign(copy.getGradeSign()), _grade_exec(copy.getGradeExec())
{
	return ;
}

Form::~Form()
{
	return ;
}

Form &Form::operator=(Form const &copy)
{
	this->_sign = copy.getSign();
	return (*this);
}

std::string Form::getName() const
{
	return(this->_name);
}

int Form::getGradeSign() const
{
	return(this->_grade_sign);
}

int Form::getGradeExec() const
{
	return(this->_grade_exec);
}

bool Form::getSign() const
{
	return(this->_sign);
}

std::string Form::getTarget() const
{
	return (this->_target);
}


const char *Form::GradeTooHighException::what() const throw()
{
	return("Grade too Hight to sign form");
}

const char *Form::GradeTooLowException::what() const throw()
{
	return("Grade too low to sign form");
}

const char *Form::FormAlreadySigned::what() const throw()
{
	return("Form already signed");
}

const char *Form::FormNotSigned::what() const throw()
{
	return("Form not signed");
}

void Form::setSign()
{
	if(this->_sign == false)
		this->_sign = true;
	else
		std::cout << *this;
}

void Form::beSigned(Bureaucrat const &b)
{
	if(b.getGrade() <= this->getGradeSign())
		this->setSign();
	else
		throw Form::GradeTooLowException();
}

void Form::executeForm(Bureaucrat const &b) const
{
	if (b.getGrade() > this->_grade_exec)
		throw Bureaucrat::GradeTooLowException();
	if (!this->_sign)
		throw Form::FormNotSigned();
	std::cout << b.getName() << " execute " << this->_name << std::endl;
	return ;
}

std::ostream &operator<<(std::ostream &o, Form const &form)
{
	o << "Form : " << form.getName();
	if(form.getSign() ==  true)
		o << " is signed";
	else
		o << " is not signed";
	o << " (grade exec = " << form.getGradeExec();
	o << ", grade sign = " << form.getGradeSign() << ")";

	return(o);
}

void	Form::setTarget(std::string const target)
{
	this->_target = target;
	return ;
}
