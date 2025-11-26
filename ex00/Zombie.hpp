/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmontini <fmontini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/02 17:03:53 by francesca         #+#    #+#             */
/*   Updated: 2025/11/20 16:43:39 by fmontini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# define GREEN "\033[32m"
# define YELLOW "\033[33m"
# define RED "\033[31m"
# define RESET "\033[0m"

# include <iostream>
# include <string>

class Zombie
{
  private:
	std::string _name;

  public: 
    Zombie(std::string name);
	~Zombie();

	void announce(void);
};

Zombie *newZombie(std::string name);
void	randomChump(std::string name);

#endif