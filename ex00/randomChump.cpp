/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   randomChump.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: francesca <francesca@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/02 17:51:30 by francesca         #+#    #+#             */
/*   Updated: 2025/11/17 18:49:07 by francesca        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

// Crea uno zombie sullo STACK, lo fa annunciare, poi viene distrutto automaticamente
void randomChump(std::string name)
{
    Zombie z(name); //Chiama il costruttore con assegnazione
    z.announce(); // Alla fine della funzione, z viene distrutto automaticamente
}