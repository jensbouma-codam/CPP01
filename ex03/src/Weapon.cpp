/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Weapon.cpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: jensbouma <jensbouma@student.codam.nl>       +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/02/24 16:18:29 by jensbouma     #+#    #+#                 */
/*   Updated: 2024/02/24 16:18:42 by jensbouma     ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string type) : _type(type) {
    return ;
}

Weapon::~Weapon() {
    return ;
}

std::string const &Weapon::getType() {
    return (this->_type);
}

void Weapon::setType(std::string type) {
    this->_type = type;
    return ;
}
