/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ztouzri <ztouzri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/14 16:25:13 by ztouzri           #+#    #+#             */
/*   Updated: 2021/11/15 12:02:05 by ztouzri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int	main(void)
{
	Bureaucrat zak = Bureaucrat("zak", 10);
	Bureaucrat bro = Bureaucrat("bro", 0);
	Bureaucrat m = Bureaucrat("mathias", 150);
	Bureaucrat w = Bureaucrat("waniboy", 151);
	
	std::cout << w << " | " << bro << std::endl;
	return (0);
}