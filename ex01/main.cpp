/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmontini <fmontini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/18 13:36:21 by francesca         #+#    #+#             */
/*   Updated: 2025/11/20 14:23:10 by fmontini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <iostream>

int main()
{
    std::cout << GREEN << "=== Creating a horde of 10 zombies ===" << RESET << std::endl;
    
    int hordeSize = 10;
    Zombie* horde = zombieHorde(hordeSize, "Walker");
    
    std::cout << YELLOW << "\n=== Making the horde announce ===" << RESET << std::endl;
    
    for (int i = 0; i < hordeSize; i++)
    {
        horde[i].announce();
    }
    
    std::cout << RED << "\n=== Destroying the horde ===" << RESET << std::endl;
    
    delete[] horde;
    return 0;
}