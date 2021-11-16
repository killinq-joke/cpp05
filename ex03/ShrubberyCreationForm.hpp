/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ztouzri <ztouzri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 05:14:33 by mout              #+#    #+#             */
/*   Updated: 2021/11/16 14:12:32 by ztouzri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBERRYCREATIONFORM_HPP
# define SHRUBERRYCREATIONFORM_HPP
# include "Form.hpp"
# include <fstream>
# include <iostream>

class ShrubberyCreationForm : public Form
{
public:
    ShrubberyCreationForm(std::string target);
    ShrubberyCreationForm(ShrubberyCreationForm const & s1);
    ~ShrubberyCreationForm(void);

    void    execute(Bureaucrat const & executor) const;
	Form	*quasiduplicate(std::string target);
};


#endif