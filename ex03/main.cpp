/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ztouzri <ztouzri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/14 16:25:13 by ztouzri           #+#    #+#             */
/*   Updated: 2021/11/16 12:50:48 by ztouzri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

int	main(void)
{
	Bureaucrat m = Bureaucrat("mathias", 150);
	Bureaucrat w = Bureaucrat("waniboy", 10);
	Form f = Form("zak's form", 10);
	RobotomyRequestForm z = RobotomyRequestForm("broman");
	
	std::cout << w << " | " << m << std::endl;
	
	m.signForm(f);
	w.signForm(f);
	z.execute(m);
	z.execute(w);
	z.beSigned(w);
	z.execute(w);
	return (0);
}