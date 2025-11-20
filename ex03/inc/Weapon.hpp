/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: francesca <francesca@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/18 15:03:42 by francesca         #+#    #+#             */
/*   Updated: 2025/11/19 23:05:50 by francesca        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

# include <string>

class Weapon 
{
    private:
    std::string _type;
    
    public:
    Weapon(std::string type);
    ~Weapon();
    const std::string& getType() const;
    void setType(std::string type);

};

#endif