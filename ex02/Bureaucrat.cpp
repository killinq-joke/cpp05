/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mout <mout@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/14 16:25:51 by ztouzri           #+#    #+#             */
/*   Updated: 2021/11/16 06:48:24 by mout             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name), _grade(grade)
{
	std::cout << "Bureaucrat constructor" << std::endl;
	try
	{
		if (grade <= 0)
			throw Bureaucrat::GradeTooHighException();
		else if (grade > 150)
			throw Bureaucrat::GradeTooLowException();
	}
	catch (Bureaucrat::GradeTooHighException&)
	{
		std::cerr << "Bureaucrat Grade Too High Exception" << std::endl;
	}
	catch (Bureaucrat::GradeTooLowException&)
	{
		std::cerr << "Bureaucrat Grade Too Low Exception" << std::endl;
	}
	catch (std::exception & e)
	{
		std::cerr << "Bureaucrat normal exception" << std::endl;
	}
}

Bureaucrat::Bureaucrat(Bureaucrat const & b1) : _name(b1.getName()), _grade(b1.getGrade())
{
	std::cout << "Bureaucrat copy constructor" << std::endl;
}

Bureaucrat::~Bureaucrat(void)
{
	std::cout << "Bureaucrat destructor" << std::endl;
}

std::string	Bureaucrat::getName(void) const
{
	return (this->_name);
}

int			Bureaucrat::getGrade(void) const
{
	return (this->_grade);
}

void		Bureaucrat::increment(void)
{
	if (this->getGrade() > 1)
		this->_grade--;
}

void		Bureaucrat::decrement(void)
{
	if (this->getGrade() < 150)
		this->_grade++;
}

void		Bureaucrat::signForm(Form & f1)
{
	try
	{
		f1.beSigned(*this);
		std::cout << *this << " signs " << f1 << std::endl;
	}
	catch (Form::GradeTooLowException&)
	{
		std::cerr << *this << " cannot sign because his grade is too low" << std::endl;
	}
}

void		Bureaucrat::executeForm(Form const & form)
{
	form.execute(*this);
}

std::ostream&	operator<<(std::ostream& o, Bureaucrat const & b1)
{
	o << b1.getName() << ", bureaucrat grade " << b1.getGrade();
	return (o);
}