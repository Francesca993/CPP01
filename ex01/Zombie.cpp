/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmontini <fmontini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/18 13:19:53 by francesca         #+#    #+#             */
/*   Updated: 2025/11/20 16:50:38 by fmontini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <sstream>
#include <iostream>

// Viene chiamato quando fai new Zombie[N]
Zombie::Zombie()
{
    _name = "Unnamed Zombie Default";
    std::cout << BLUE << "Zombie created (default)" << std::endl;
}

// Distruttore
Zombie::~Zombie()
{
    std::cout << RED << _name << " has been destroyed" << std::endl;
}

// Metodo announce 
void Zombie::announce(void)
{
    std::cout << YELLOW << _name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

//Metodo per settare il nome con indice
void Zombie::setName(std::string name, int index)
{
    std::stringstream newName;
    newName << name << index;
    _name = newName.str();
    std::cout << GREEN << _name << " has been created" << std::endl;
    newName.str("");
    newName.clear();
}
