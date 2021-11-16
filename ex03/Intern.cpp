/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ztouzri <ztouzri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 12:05:00 by ztouzri           #+#    #+#             */
/*   Updated: 2021/11/16 14:02:19 by ztouzri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern(void)
{
	this->formtab = {new ShrubberyCreationForm(), new RobotomyRequestForm(), new PresidentialPardonForm()};
	std::cout << "Intern constructor" << std::endl;
}

Intern::~Intern(void)
{
	std::cout << "Intern destructor" << std::endl;
}

Form	*Intern::makeForm(std::string name, std::string target)
{
	for (int i = 0; i < 3; i++)
	{
		if (formtab[i]->getName() == name)
			return (formtab[i]->quasiduplicate(target));
	}
}
