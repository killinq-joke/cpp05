/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ztouzri <ztouzri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 12:05:00 by ztouzri           #+#    #+#             */
/*   Updated: 2021/11/18 13:40:21 by ztouzri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern(void)
{
	this->formtab = new Form*[3];
	this->formtab[0] = new ShrubberyCreationForm("null");
	this->formtab[1] = new RobotomyRequestForm("null");
	this->formtab[2] = new PresidentialPardonForm("null");
	std::cout << "Intern constructor" << std::endl;
}

Intern::Intern(Intern & const i1)
{
	this->formtab = new Form*[3];
	this->formtab[0] = i1.formtab[0]->quasiduplicate(i1.formtab[0]->getTarget());
	this->formtab[1] = i1.formtab[1]->quasiduplicate(i1.formtab[1]->getTarget());
	this->formtab[2] = i1.formtab[2]->quasiduplicate(i1.formtab[2]->getTarget());
	std::cout << "Intern copy constructor" << std::endl;
}

Intern::~Intern(void)
{
	for (int i = 0; i < 3; i++)
	{
		delete this->formtab[i];
	}
	delete this->formtab;
	std::cout << "Intern destructor" << std::endl;
}

Form	*Intern::makeForm(std::string name, std::string target)
{
	for (int i = 0; i < 3; i++)
	{
		if (formtab[i]->getName() == name)
			return (formtab[i]->quasiduplicate(target));
	}
	std::cerr << "'I don't have any form with this name'" << std::endl;
	return (nullptr);
}
