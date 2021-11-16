/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ztouzri <ztouzri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/14 16:25:49 by ztouzri           #+#    #+#             */
/*   Updated: 2021/11/16 11:38:22 by ztouzri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP
# include <iostream>
# include <stdexcept>

class Bureaucrat
{

public:
	Bureaucrat(std::string name, int grade);
	Bureaucrat(Bureaucrat const & b1);
	Bureaucrat operator=(Bureaucrat const & b1);
	~Bureaucrat(void);
	class	GradeTooHighException : public std::exception
	{
	};
	class	GradeTooLowException : public std::exception
	{
	};
	std::string	getName(void) const;
	int			getGrade(void) const;
	void		increment(void);
	void		decrement(void);
	void		setName(std::string name);
	void		setGrade(int grade);

private:
	std::string _name;
	int			_grade;
};

std::ostream&	operator<<(std::ostream& o, Bureaucrat const & b1);

#endif