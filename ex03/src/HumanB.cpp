/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: francesca <francesca@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/19 22:41:02 by francesca         #+#    #+#             */
/*   Updated: 2025/11/19 23:17:30 by francesca        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"
#include "Weapon.hpp"
#include <iostream>

HumanB::HumanB(std::string name): _name(name)
{
}

HumanB::~HumanB()
{
}
void HumanB::setWeapon(Weapon &weapon)
{
    _weapon = &weapon;
}

void HumanB::attack()
{
    if (_weapon == NULL)
    {
        std::cout << _name << " is unarmed" << std::endl;
    }
    else
    {
        std::cout << _name << " attacks with their " << _weapon->getType() << std::endl;
    }
}