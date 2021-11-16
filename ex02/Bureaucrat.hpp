/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mout <mout@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/14 16:25:49 by ztouzri           #+#    #+#             */
/*   Updated: 2021/11/16 06:47:52 by mout             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP
# include <iostream>
# include <stdexcept>
# include "Form.hpp"

class Form;

class Bureaucrat
{

public:
	Bureaucrat(std::string name, int grade);
	Bureaucrat(Bureaucrat const & b1);
	~Bureaucrat(void);
	class	GradeTooHighException : public std::exception {};
	class	GradeTooLowException : public std::exception {};
	std::string	getName(void) const;
	int			getGrade(void) const;
	void		increment(void);
	void		decrement(void);
	void		signForm(Form & f1);
	void		executeForm(Form const & form);

private:
	std::string _name;
	int			_grade;
};

std::ostream&	operator<<(std::ostream& o, Bureaucrat const & b1);

#endif