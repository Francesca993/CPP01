/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmontini <fmontini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/02 17:02:28 by francesca         #+#    #+#             */
/*   Updated: 2025/11/20 15:31:19 by fmontini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
    randomChump("StackZombie");
    
    Zombie* heapZombie = newZombie("MarioHeapZombie");
    heapZombie->announce();
    delete heapZombie;
    
    randomChump("PeachStack");
    randomChump("LuigiStack"); 

    return (0);
}