/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: francesca <francesca@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/02 17:02:28 by francesca         #+#    #+#             */
/*   Updated: 2025/11/17 19:01:38 by francesca        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
    randomChump("StackZombie");
    // StackZombie viene distrutto automaticamente alla fine di randomChump()
    
    Zombie* heapZombie = newZombie("MarioHeapZombie");
    heapZombie->announce();
    delete heapZombie;  // Ora viene distrutto
    
    randomChump("PeachStack");  // Stack: creato e distrutto subito
    randomChump("LuigiStack"); 

    return (0);
}