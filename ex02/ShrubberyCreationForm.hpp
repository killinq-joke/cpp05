/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mout <mout@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 05:14:33 by mout              #+#    #+#             */
/*   Updated: 2021/11/16 05:34:54 by mout             ###   ########.fr       */
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
    ~ShrubberyCreationForm(void);

    void    execute(Bureaucrat const & executor) const;
};


#endif