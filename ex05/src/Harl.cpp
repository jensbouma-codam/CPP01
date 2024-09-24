/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Harl.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: jensbouma <jensbouma@student.codam.nl>       +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/02/24 17:22:51 by jensbouma     #+#    #+#                 */
/*   Updated: 2024/09/24 16:27:34 by jensbouma     ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl() {
    this->_message = "This debug message we dont have to set in the exercise";
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

void Harl::set_message(std::string message) {
    _message = message;
}

void Harl::complain(std::string level) {
    void (Harl::*p)();

    // Create a map with the member functions
    std::map<std::string, void (Harl::*)()> functionMap;
    functionMap["debug"] = &Harl::debug;
    functionMap["info"] = &Harl::info;
    functionMap["warning"] = &Harl::warning;
    functionMap["error"] = &Harl::error;

    p = functionMap[level];    

    if (p == NULL) {
        std::cout << "Invalid log level" << std::endl;
        return ;
    }
    // Call the private member function
    (this->*p)();
}