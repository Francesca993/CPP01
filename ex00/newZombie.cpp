/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmontini <fmontini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/17 18:46:27 by francesca         #+#    #+#             */
/*   Updated: 2025/11/20 14:16:25 by fmontini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

// Crea uno zombie sull'HEAP e lo restituisce
Zombie* newZombie(std::string name)
{
    Zombie* zombie = new Zombie(name);
    return (zombie);
}