/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: francesca <francesca@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/02 17:50:49 by francesca         #+#    #+#             */
/*   Updated: 2025/11/18 14:13:56 by francesca        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

// Costruttore: usa ASSEGNAZIONE nel corpo
Zombie::Zombie(std::string name)
{
    _name = name;
    std::cout << GREEN << _name << " has been created" << std::endl;
}

// Distruttore: chiamato quando lo zombie viene distrutto
Zombie::~Zombie()
{
    std::cout << RED << _name << " has been destroyed" << std::endl;
}

// Metodo announce: lo zombie si annuncia
void Zombie::announce(void)
{
    std::cout << YELLOW << _name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}