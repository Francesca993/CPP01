/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: francesca <francesca@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/20 12:08:37 by francesca         #+#    #+#             */
/*   Updated: 2025/11/20 14:07:20 by francesca        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"
# include <string>
# include <iostream>

int main(int argc, char **argv)
{
    if (argc != 2)
    {
        std::cout << "Usage: ./Harl [DEBUG|INFO|WARNING|ERROR]" << std::endl;
    }
    Harl h;
    h.complain(argv[1]);
    return (0);
}

