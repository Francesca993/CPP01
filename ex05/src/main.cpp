/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmontini <fmontini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/20 12:08:37 by francesca         #+#    #+#             */
/*   Updated: 2025/11/26 16:01:13 by fmontini         ###   ########.fr       */
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
        return (1);
    }
    Harl h;
    h.complain(argv[1]);
    return (0);
}

