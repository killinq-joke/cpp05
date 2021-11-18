/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ztouzri <ztouzri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 12:19:37 by ztouzri           #+#    #+#             */
/*   Updated: 2021/11/18 13:52:54 by ztouzri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form(std::string name, int grade, std::string target) : _name(name), _grade(grade), _signed(false), _target(target)
{
	if (grade <= 0)
		throw Form::GradeTooHighException();
	else if (grade > 150)
		throw Form::GradeTooLowException();
	std::cout << "Form constructor" << std::endl;
}

Form::Form(std::string name, int grade) : _name(name), _grade(grade), _signed(false)
{
	if (grade <= 0)
		throw Form::GradeTooHighException();
	else if (grade > 150)
		throw Form::GradeTooLowException();
	std::cout << "Form constructor" << std::endl;
}

Form::Form(Form const & f1) : _name(f1.getName()), _grade(f1.getGrade()), _signed(f1.getSigned()), _target(f1.getTarget())
{
	try
	{
		if (f1.getGrade() <= 0)
			throw Form::GradeTooHighException();
		else if (f1.getGrade() > 150)
			throw Form::GradeTooLowException();
	}
	catch (Form::GradeTooHighException&)
	{
		std::cerr << "Form Grade Too High Exception" << std::endl;
	}
	catch (Form::GradeTooLowException&)
	{
		std::cerr << "Form Grade Too Low Exception" << std::endl;
	}
	std::cout << "Form copy constructor" << std::endl;
}

Form::~Form(void)
{
	std::cout << "Form destructor" << std::endl;
}

std::string	Form::getName(void) const
{
	return (this->_name);
}

bool		Form::getSigned(void) const
{
	return (this->_signed);
}

int			Form::getGrade(void) const
{
	return (this->_grade);
}

std::string	Form::getTarget(void) const
{
	return (this->_target);
}

void		Form::beSigned(Bureaucrat const & b1)
{
	try
	{
		if (b1.getGrade() > this->getGrade())
			throw Form::GradeTooLowException();
		else
			this->_signed = true;

	}
	catch (Form::GradeTooLowException&)
	{
		throw(Form::GradeTooLowException());
		std::cerr << "Form Grade Too Low Exception" << std::endl;
	}
	
}

void	Form::execute(Bureaucrat const & executor) const
{
	(void)executor;
}

std::ostream & operator<<(std::ostream & o, Form const & f1)
{
	o << "<name> " << f1.getName() << " <signed> " << f1.getSigned() << " <grade> " << f1.getGrade();
	return (o);
}