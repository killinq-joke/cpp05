/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ztouzri <ztouzri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/14 16:25:13 by ztouzri           #+#    #+#             */
/*   Updated: 2021/11/18 14:06:31 by ztouzri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "Intern.hpp"

int	main(void)
{
	Bureaucrat m = Bureaucrat("mathias", 150);
	Bureaucrat w = Bureaucrat("waniboy", 10);
	Bureaucrat zz = Bureaucrat("zak", 1);
	// Form f = Form("zak's form", 10);
	// RobotomyRequestForm z = RobotomyRequestForm("broman");
	Intern noname = Intern();

	Form *rrf, *ppf, *what;
	rrf = noname.makeForm("Robotomy Request Form", "Bender");
	ppf = noname.makeForm("Presidential Pardon Form", "Marwa Loud");
	what = noname.makeForm("wefkoewfo", "bobo");
	
	std::cout << w << " | " << m << std::endl;
	rrf->beSigned(w);
	w.executeForm(*rrf);
	w.executeForm(*ppf);
	zz.signForm(*ppf);
	zz.executeForm(*ppf);
	// m.signForm(f);
	// w.signForm(f);
	// z.execute(m);
	// z.execute(w);
	// z.beSigned(w);
	// z.execute(w);
	if (rrf) delete rrf;
	if (ppf) delete ppf;
	if (what) delete what;
	return (0);
}