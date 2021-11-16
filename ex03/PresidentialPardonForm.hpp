/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ztouzri <ztouzri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 06:29:37 by mout              #+#    #+#             */
/*   Updated: 2021/11/16 14:09:45 by ztouzri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP
# include "Form.hpp"

class PresidentialPardonForm : public Form
{
public:
    PresidentialPardonForm(std::string target);
    PresidentialPardonForm(PresidentialPardonForm const & p1);
    ~PresidentialPardonForm(void);

    void    execute(Bureaucrat const & executor) const;
	Form	*quasiduplicate(std::string target);
};


#endif