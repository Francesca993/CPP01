/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: francesca <francesca@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/18 13:19:53 by francesca         #+#    #+#             */
/*   Updated: 2025/11/18 14:14:55 by francesca        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <sstream>
#include <iostream>

// Viene chiamato quando fai new Zombie[N]
Zombie::Zombie()
{
    _name = "Unnamed Zombie Default";  // Nome di default
    std::cout << BLUE << "Zombie created (default)" << std::endl;
}

// Distruttore (come prima)
Zombie::~Zombie()
{
    std::cout << RED << _name << " has been destroyed" << std::endl;
}

// Metodo announce (come prima)
void Zombie::announce(void)
{
    std::cout << YELLOW << _name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

//Metodo per settare il nome con indice
void Zombie::setName(std::string name, int index)
{
    // Converti int → string usando stringstream (C++98)
    std::stringstream newName;
    newName << name << index; // Concatena nome + numero
    _name = newName.str(); // Estrae la stringa risultante
    std::cout << GREEN << _name << " has been created" << std::endl;
    newName.str("");      // Svuota il buffer
    newName.clear();      // Resetta gli stati
}
