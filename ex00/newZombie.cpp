/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: francesca <francesca@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/17 18:46:27 by francesca         #+#    #+#             */
/*   Updated: 2025/11/17 18:48:40 by francesca        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

// Crea uno zombie sull'HEAP e lo restituisce
// Deve essere deallocato manualmente con delete!
Zombie* newZombie(std::string name)
{
    Zombie* zombie = new Zombie(name);
    return (zombie);
}