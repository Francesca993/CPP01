/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmontini <fmontini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/18 13:17:41 by francesca         #+#    #+#             */
/*   Updated: 2025/11/20 16:49:28 by fmontini         ###   ########.fr       */
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
    Zombie();
    ~Zombie();
    void announce(void);

    void setName(std::string name, int index);
};

Zombie* zombieHorde(int N, std::string name);

#endif