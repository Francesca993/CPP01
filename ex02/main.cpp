/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: francesca <francesca@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/18 14:16:56 by francesca         #+#    #+#             */
/*   Updated: 2025/11/18 14:29:40 by francesca        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

int main()
{
    std::string brain = "HI THIS IS BRAIN";
    std::string* stringPTR = &brain;
    std::string& stringREF = brain;

    std::cout << "Address of string variable: " << &brain << std::endl;
    std::cout << "Address held by stringPTR:    " << stringPTR << std::endl;
    std::cout << "Address held by stringREF:    " << &stringREF << std::endl;

    std::cout << "Value of string variable:     " << brain << std::endl;
    std::cout << "Value pointed to by stringPTR:" << *stringPTR << std::endl;
    std::cout << "Value pointed to by stringREF:" << stringREF << std::endl;

    return 0;
}