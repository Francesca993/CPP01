/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: francesca <francesca@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/18 15:16:08 by francesca         #+#    #+#             */
/*   Updated: 2025/11/19 23:05:43 by francesca        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

# include <string>

class Weapon;

class HumanA
{
    private:
    std::string _name;
    Weapon& _weapon;

    public:
    HumanA(std::string name, Weapon &weapon);
    ~HumanA();
    
    void attack();
};

#endif