/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ztouzri <ztouzri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 12:19:35 by ztouzri           #+#    #+#             */
/*   Updated: 2021/11/16 11:45:45 by ztouzri          ###   ########.fr       */
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
	Form(Form const & f1);
	~Form(void);

	class GradeTooHighException : public std::exception {};
	class GradeTooLowException : public std::exception {};
	std::string	getName(void) const;
	bool		getSigned(void) const;
	int			getGrade(void) const;
	void		beSigned(Bureaucrat const & b1);
	void		setName(std::string name);
	void		setSigned(bool issigned);
	void		setGrade(int grade);

private:
	const std::string _name;
	const int			_grade;
	bool		_signed;
};

std::ostream & operator<<(std::ostream & o, Form const & f1);

#endif