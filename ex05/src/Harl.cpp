/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Harl.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: jensbouma <jensbouma@student.codam.nl>       +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/02/24 17:22:51 by jensbouma     #+#    #+#                 */
/*   Updated: 2024/02/24 17:39:13 by jensbouma     ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl() {
    return ;
}

Harl::~Harl() {
    return ;
}

void Harl::debug() {
    std::cout << "Debug: " << _message << std::endl;
}

void Harl::info() {
    std::cout << "Info: " << _message << std::endl;
}

void Harl::warning() {
    std::cout << "Warning: " << _message << std::endl;
}

void Harl::error() {
    std::cout << "Error: " << _message << std::endl;
}

// Use string level input to call the correct function with converting the pointer to the function
void Harl::complain( std::string level ) {
    std::string *p = &level;
    
    // (this->*p)();
}