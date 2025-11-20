/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: francesca <francesca@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/18 13:17:41 by francesca         #+#    #+#             */
/*   Updated: 2025/11/18 14:14:32 by francesca        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

# define GREEN "\033[32m"
# define YELLOW "\033[33m"
# define RED "\033[31m"
# define RESET "\033[0m"
# define BLUE "\033[0;34m"

#include <string>
#include <iostream>
#include <sstream>

class Zombie 
{
    private: 
        std::string _name;

    public:
    // Necessario per new Zombie[N]
    Zombie();
    // Costruttore con parametro (come prima)
    Zombie(std::string name);
    // Distruttore
    ~Zombie();
    // Metodo announce (come prima)
    void announce(void);
    // NUOVO: Metodo per settare il nome dopo la creazione
    void setName(std::string name, int index);
};

Zombie* zombieHorde(int N, std::string name);

#endif