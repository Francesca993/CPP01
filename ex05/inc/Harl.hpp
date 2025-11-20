/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: francesca <francesca@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/20 12:12:32 by francesca         #+#    #+#             */
/*   Updated: 2025/11/20 14:09:31 by francesca        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
# define HARL_HPP

# define GREEN "\033[32m"
# define YELLOW "\033[33m"
# define RED "\033[31m"
# define RESET "\033[0m"
# define BLUE "\033[0;34m"

# include <string>
# include <iostream>

class Harl {
    private:
    void debug(void);
    void info(void);
    void warning(void);
    void error(void);
    typedef void (Harl::*HarlFunc)();
    
    public:
    Harl();
    ~Harl();
    
    void complain(std::string level);
};

#endif