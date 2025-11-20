/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: francesca <francesca@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/18 13:36:21 by francesca         #+#    #+#             */
/*   Updated: 2025/11/18 14:12:52 by francesca        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <iostream>

int main()
{
    std::cout << GREEN << "=== Creating a horde of 10 zombies ===" << std::endl;
    
    int hordeSize = 10;
    Zombie* horde = zombieHorde(hordeSize, "Walker");
    
    std::cout << YELLOW << "\n=== Making the horde announce ===" << std::endl;
    
    // Fa annunciare ogni zombie
    for (int i = 0; i < hordeSize; i++)
    {
        horde[i].announce();
    }
    
    std::cout << RED << "\n=== Destroying the horde ===" << std::endl;
    
    // IMPORTANTE: usa delete[] per array!
    delete[] horde;
    return 0;
}