/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: francesca <francesca@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/20 12:15:23 by francesca         #+#    #+#             */
/*   Updated: 2025/11/20 14:09:56 by francesca        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl()
{
}

Harl::~Harl()
{
}

void Harl::debug()
{
	std::cout << GREEN << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-"
		<< "ketchup burger. I really do!" << RESET << std::endl;
}

void Harl::info()
{
	std::cout << BLUE << "I cannot believe adding extra bacon costs more money. You didn't put"
		<< " enough bacon in my burger! If you did, I wouldn't be asking for more!" << RESET << std::endl;
}

void Harl::warning()
{
	std::cout << RED << "I think I deserve to have some extra bacon for free. I’ve been coming for"
				<< " years, whereas you started working here just last month." << RESET << std::endl;
}

void Harl::error()
{
	std::cout << YELLOW << "This is unacceptable! I want to speak to the manager now." << RESET << std::endl;
}

void Harl::complain(std::string level)
{
    HarlFunc funcs[4] = {&Harl::debug, &Harl::info, &Harl::warning,
	    &Harl::error};
	std::string levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	for (int i = 0; i < 4; i++)
	{
		if (level == levels[i])
		{
			(this->*funcs[i])();
			return ;
		}
	}
}
