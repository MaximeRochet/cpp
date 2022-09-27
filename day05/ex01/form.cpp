/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrochet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/27 12:23:54 by mrochet           #+#    #+#             */
/*   Updated: 2022/06/27 16:17:38 by mrochet          ###   ########lyon.fr   */
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

const char *Form::GradeTooHighException::what() const throw()
{
	return("Grade too Hight to sign form");
}

const char *Form::GradeTooLowException::what() const throw()
{
	return("Grade too low to sign form");
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

std::ostream &operator<<(std::ostream &o, Form const &form)
{
	o << "Form : " << form.getName();
	if(form.getSign() ==  true)
		o << " is signed";
	else
		o << " is not signed";
	o << " (grade exec = " << form.getGradeExec();
	o << ", grade sign = " << form.getGradeSign() << ")" <<  std::endl;

	return(o);
}
