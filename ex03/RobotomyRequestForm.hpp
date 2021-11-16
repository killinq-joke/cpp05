/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ztouzri <ztouzri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 05:51:05 by mout              #+#    #+#             */
/*   Updated: 2021/11/16 14:12:26 by ztouzri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP
# include "Form.hpp"

class RobotomyRequestForm : public Form
{
public:
    RobotomyRequestForm(std::string target);
    RobotomyRequestForm(RobotomyRequestForm const & r1);
    ~RobotomyRequestForm(void);

    void    execute(Bureaucrat const & executor) const;
	Form	*quasiduplicate(std::string target);
};

#endif