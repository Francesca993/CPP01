/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   randomChump.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmontini <fmontini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/02 17:51:30 by francesca         #+#    #+#             */
/*   Updated: 2025/11/20 14:16:38 by fmontini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

// Crea uno zombie sullo STACK, lo fa annunciare, poi viene distrutto automaticamente
void randomChump(std::string name)
{
    Zombie z(name);
    z.announce();
}