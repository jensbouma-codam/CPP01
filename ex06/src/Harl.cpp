/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Harl.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: jensbouma <jensbouma@student.codam.nl>       +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/02/24 17:22:51 by jensbouma     #+#    #+#                 */
/*   Updated: 2024/02/27 11:38:19 by jensbouma     ########   odam.nl         */
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
    std::cout << "DEBUG: " << _message << std::endl;
}

void Harl::info() {
    std::cout << "INFO: " << _message << std::endl;
}

void Harl::warning() {
    std::cout << "WARNING: " << _message << std::endl;
}

void Harl::error() {
    std::cout << "ERROR: " << _message << std::endl;
}

void Harl::set_message(std::string message) {
    _message = message;
}

void Harl::set_filter(enum Level filter)
{
    _filter = filter;
}

std::string str_to_upper(std::string str)
{
    for (size_t i = 0; i < str.length(); i++) {
        str[i] = toupper(str[i]);
    }
    return str;
}

enum Level get_log_level(std::string level)
{
    std::map<std::string, enum Level> functionMap;
    functionMap["DEBUG"] = DEBUG;
    functionMap["INFO"] = INFO;
    functionMap["WARNING"] = WARNING;
    functionMap["ERROR"] = ERROR;

    if (functionMap.find(str_to_upper(level)) == functionMap.end())
        return OFF;
    return functionMap[str_to_upper(level)]; 
}

void Harl::complain(std::string level) {

    enum Level level_enum = get_log_level(level);

    if (_filter > level_enum || _filter == OFF)
        return ;

    // Switch for the meme.... as the subject require it.
    switch (level_enum) {
        case DEBUG:
            this->debug();
            break ;
        case INFO:
            this->info();
            break ;
        case WARNING:
            this->warning();
            break ;
        case ERROR:
            this->error();
            break ;
        case OFF:
            break;
    }
}