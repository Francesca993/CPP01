/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: francesca <francesca@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/20 09:40:58 by francesca         #+#    #+#             */
/*   Updated: 2025/11/20 10:34:11 by francesca        ###   ########.fr       */
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
    std::ofstream outfile(std::string(filename) + ".replace");
    std::string line;
    
    // Check if find string is empty
	if (s1.empty())
	{
		std::cout << "S1 string is empty" << std::endl;
		return (1);
	}
    //Open tjhe input file
    infile.open(filename);
    if (!infile.is_open())
    {
        std::cerr << "Error: could not open input file" << std::endl;
        return 1;
    }
    // outfile already opened by constructor above
    if (!outfile.is_open())
    {
        std::cerr << "Error: could not create output file" << std::endl;
        return (1);
    }
    // Read file line by line
    while (std::getline(infile, line))
    {
        size_t found = line.find(s1);
        while (found != std::string::npos) // line.find(s1) se NON trova s1 → ti restituisce std::string::npos
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