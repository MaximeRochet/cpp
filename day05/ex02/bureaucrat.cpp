/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrochet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/27 07:58:39 by mrochet           #+#    #+#             */
/*   Updated: 2022/06/28 12:34:57 by mrochet          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "bureaucrat.hpp"

Bureaucrat::Bureaucrat() : name("Default"), grade(1)
{ return ; }

Bureaucrat::Bureaucrat(std::string name) : name(name), grade(1)
{ return ; }

Bureaucrat::Bureaucrat(std::string name, int grade) : name(name)
{
	this->setGrade(grade);	
	return ; 
}

Bureaucrat::Bureaucrat(Bureaucrat const &)
{ return ; }

Bureaucrat::~Bureaucrat()
{ return ; }

Bureaucrat &Bureaucrat::operator=(Bureaucrat const &copy)
{
	this->grade = copy.getGrade();
	return (*this);
}

Bureaucrat &Bureaucrat::operator++()
{
	this->setGrade(this->getGrade() - 1);
	return(*this);
}

Bureaucrat &Bureaucrat::operator--()
{
	this->setGrade(this->getGrade() + 1);
	return(*this);
}

Bureaucrat Bureaucrat::operator++(int)
{
	Bureaucrat tmp = *this;
	this->setGrade(this->getGrade() - 1);
	return(tmp);
}

Bureaucrat Bureaucrat::operator--(int)
{
	Bureaucrat tmp = *this;
	this->setGrade(this->getGrade() + 1);
	return(tmp);
}
void Bureaucrat::setGrade(int grade)
{
	if(grade < 1)
		throw Bureaucrat::GradeTooHighException();
	else if(grade > 150)
		throw Bureaucrat::GradeTooLowException();
	else 
		this->grade = grade;
}

int Bureaucrat::getGrade() const
{
	return(this->grade);
}

std::string Bureaucrat::getName() const
{
	return(this->name);
}

std::ostream &operator<<(std::ostream &o, Bureaucrat const &tmp)
{
	o << tmp.getName() << ", bureaucrat grade " << tmp.getGrade() << std::endl;
	return(o);
}

const char *Bureaucrat::GradeTooHighException::what() const throw()
{
	return ("Grade too high");
}

const char *Bureaucrat::GradeTooLowException::what() const throw()
{
	return ("Grade too low");
}

void	Bureaucrat::signForm(Form &form)
{
	try
	{
		form.beSigned(*this);
		std::cout << this->getName() << " sign " << form.getName() << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << this->getName() << " can't sign this form because " << e.what() << std::endl;
	}
	return ;
}

void	Bureaucrat::executeForm(Form const &form)
{
	try
	{
		form.executeForm(*this);
	}
	catch (std::exception &e)
	{
		std::cout << this->name << " can't execute this form because " << e.what() << std::endl;
	}
	return ;
}
