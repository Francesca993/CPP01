/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: francesca <francesca@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/18 16:17:14 by francesca         #+#    #+#             */
/*   Updated: 2025/11/19 23:15:03 by francesca        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP
#include <iostream>
# include <string>
#include "Weapon.hpp"

class HumanB
{
    private:
    std::string _name;
    Weapon* _weapon;

    public:
    HumanB(std::string name);
    ~HumanB();
    
    void setWeapon(Weapon &weapon);
    void attack();
};

#endif