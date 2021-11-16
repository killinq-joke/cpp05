/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mout <mout@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 06:30:52 by mout              #+#    #+#             */
/*   Updated: 2021/11/16 06:52:43 by mout             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(std::string target) : Form::Form(target, 25)
{
    std::cout << "Presidential Pardon Form constructor" << std::endl;
}

PresidentialPardonForm::~PresidentialPardonForm(void)
{
    std::cout << "Presidential Pardon Form destructor" << std::endl;
}

void    PresidentialPardonForm::execute(Bureaucrat const & executor) const
{
    try
    {
        if (executor.getGrade() > 5)
        {
            throw Form::GradeTooLowException();
        }
        if (!this->getSigned())
        {
            throw Form::NotSignedExecution();
        }
        std::cout << this->getName() << " has been forgiven by Zafod Beeblebrox" << std::endl;
    }
    catch (Form::GradeTooLowException&)
    {
        throw (Form::GradeTooLowException());
        std::cerr << "Presidential Pardon Form: Grade Too Low" << std::endl;
    }
    catch (Form::NotSignedExecution&)
    {
        throw (Form::NotSignedExecution());
        std::cerr << "Presidential Pardon Form: Nor Signed Execution" << std::endl;
    }
    
}