/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmontini <fmontini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/20 09:40:58 by francesca         #+#    #+#             */
/*   Updated: 2025/11/20 17:03:25 by fmontini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>  // → per stampare messaggi (usage, errori, debug…).
#include <fstream>   // → per lavorare con i file: std::ifstream, leggere dal file originale / std::ofstream → scrivere
#include <string>    // → perché usi std::string, find(), substr(), concatenazioni…

int main(int argc, char **argv)
{
    if (argc != 4)
    {
        std::cout << "Usage: ./sed <file> <s1> <s2>" << std::endl;
        return (1);
    }
    
    std::string filename = argv[1];
    std::string s1 = argv[2];
    std::string s2 = argv[3];
    std::ifstream infile;
    std::ofstream outfile((filename + ".replace").c_str(), std::ios::out | std::ios::trunc);
    std::string line;
    
	if (s1.empty())
	{
		std::cout << "S1 string is empty" << std::endl;
		return (1);
	}
    infile.open((filename).c_str());
    if (!infile.is_open())
    {
        std::cerr << "Error: could not open input file" << std::endl;
        return 1;
    }
    if (!outfile.is_open())
    {
        std::cerr << "Error: could not create output file" << std::endl;
        return (1);
    }
    while (std::getline(infile, line))
    {
        size_t found = line.find(s1);
        while (found != std::string::npos)
        {
            line.erase(found, s1.length());
            line.insert(found, s2);
            found = line.find(s1, found + s2.length());
        }
        outfile << line << std::endl;
    }
    infile.close();
	outfile.close();
    return (0);
}