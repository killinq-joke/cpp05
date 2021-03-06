/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ztouzri <ztouzri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 06:30:52 by mout              #+#    #+#             */
/*   Updated: 2021/11/18 14:06:12 by ztouzri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(std::string target) : Form::Form("Presidential Pardon Form", 25, target)
{
    std::cout << "Presidential Pardon Form constructor" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const & p1) : Form::Form(p1.getName(), p1.getGrade(), p1.getTarget())
{
    std::cout << "Presidential Pardon Form copy constructor" << std::endl;
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
        std::cout << this->getTarget() << " has been forgiven by Zafod Beeblebrox" << std::endl;
    }
    catch (Form::GradeTooLowException&)
    {
        std::cerr << "Presidential Pardon Form: Grade Too Low" << std::endl;
    }
    catch (Form::NotSignedExecution&)
    {
        std::cerr << "Presidential Pardon Form: Not Signed Execution" << std::endl;
    }
    
}