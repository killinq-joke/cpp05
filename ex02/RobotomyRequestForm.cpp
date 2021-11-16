/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mout <mout@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 05:49:23 by mout              #+#    #+#             */
/*   Updated: 2021/11/16 05:59:46by mout             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(std::string target) : Form::Form(target, 72)
{
    std::cout << "Robotomy Request Form constructor" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const & r1) : Form::Form(r1.getName(), r1.getGrade())
{
    std::cout << "Robotomy Request Form copy constructor" << std::endl;
}

RobotomyRequestForm::~RobotomyRequestForm(void)
{
    std::cout << "Robotomy Request Form destructor" << std::endl;
}

void    RobotomyRequestForm::execute(Bureaucrat const & executor) const
{
    try
    {
        if (executor.getGrade() > 45)
        {
            throw Form::GradeTooLowException();
        }
        if (!this->getSigned())
        {
            throw Form::NotSignedExecution();
        }
        srand(time(0));
        if (rand() % 2)
            std::cout << this->getName() << " has been robotized" << std::endl;
        else
            std::cout << "Failure trying to robotize " << this->getName() << std::endl;
    }
    catch (Form::GradeTooLowException&)
    {
        throw Form::GradeTooLowException();
        std::cerr << "Robotomy Request Form: Grade Too Low" << std::endl;
    }
    catch (Form::NotSignedExecution&)
    {
        throw Form::NotSignedExecution();
        std::cerr << "Robotomy Request Form: Not Signed Execution" << std::endl;
    }
}