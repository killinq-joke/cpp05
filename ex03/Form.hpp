/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ztouzri <ztouzri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 12:19:35 by ztouzri           #+#    #+#             */
/*   Updated: 2021/11/16 14:09:40 by ztouzri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP
# include <iostream>
# include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
public:
	Form(std::string name, int grade);
	Form(std::string name, int grade, std::string target);
	Form(Form const & f1);
	virtual ~Form(void);

	class GradeTooHighException : public std::exception {};
	class GradeTooLowException : public std::exception {};
    class NotSignedExecution : public std::exception {};
	std::string	getTarget(void) const;
	std::string	getName(void) const;
	bool		getSigned(void) const;
	int			getGrade(void) const;
	void		beSigned(Bureaucrat const & b1);
	virtual	Form	*quasiduplicate(std::string target);
	virtual	void	execute(Bureaucrat const & executor) const;

private:
	const std::string _name;
	const int			_grade;
	bool		_signed;
	const std::string _target;
};

std::ostream & operator<<(std::ostream & o, Form const & f1);

#endif