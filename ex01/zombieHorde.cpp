/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: francesca <francesca@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/18 13:23:38 by francesca         #+#    #+#             */
/*   Updated: 2025/11/18 13:24:36 by francesca        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

// Crea un'orda di N zombies con lo stesso nome
// IMPORTANTE: usa new[] quindi serve delete[] per liberare la memoria!
Zombie* zombieHorde(int N, std::string name)
{
    // 1. Alloca un array di N zombies sull'heap
    //    Chiama il costruttore default per ogni zombie
    Zombie* horde = new Zombie[N];
    
    // 2. Assegna il nome a tutti gli zombies
    for (int i = 0; i < N; i++)
    {
        horde[i].setName(name, i);
    }
    
    // 3. Ritorna il puntatore al primo zombie dell'array
    return horde;
}