/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mout <mout@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 05:23:30 by mout              #+#    #+#             */
/*   Updated: 2021/11/16 06:53:27 by mout             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : Form::Form(target, 145)
{
    std::cout << "Shrubbery Creation Form constructor" << std::endl;
}

ShrubberyCreationForm::~ShrubberyCreationForm(void)
{
    std::cout << "Shrubbery Creation Form destructor" << std::endl;
}

void    ShrubberyCreationForm::execute(Bureaucrat const & executor) const
{
    std::fstream file;

    try
    {
        if (executor.getGrade() > 137)
        {
            throw Form::GradeTooLowException();
        }
        if (!this->getSigned())
        {
            throw Form::NotSignedExecution();
        }
        file.open(this->getName() + "_shrubbery", std::ios::out);
        file << "   w     w" << std::endl << "  www   www" << std::endl << " wwwww wwwww" << std::endl << "   w     w" << std::endl;
        file.close();
    }
    catch (Form::GradeTooLowException&)
    {
        throw Form::GradeTooLowException();
        std::cerr << "Cannot execute Shrubbery: Grade Too Low" << std::endl;
    }
    catch (Form::NotSignedExecution&)
    {
        throw Form::NotSignedExecution();
        std::cerr << "Cannot execute Shrubbery: Unsigned Form" << std::endl;
    }
}
