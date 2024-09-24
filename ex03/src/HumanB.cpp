/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   HumanB.cpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: jensbouma <jensbouma@student.codam.nl>       +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/02/24 16:12:42 by jensbouma     #+#    #+#                 */
/*   Updated: 2024/09/24 15:48:57 by jensbouma     ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name) : _name(name) {
    return ;
}

HumanB::~HumanB() {
    return ;
}

void HumanB::attack() {
    if (this->_weapon == NULL) {
        std::cout << this->_name << " has no weapon to attack with" << std::endl;
        return ;
    }
    std::cout << this->_name << " attacks with his " << this->_weapon->getType() << std::endl;
    return ;
}

void HumanB::setWeapon(Weapon &weapon) {
    this->_weapon = &weapon;
    return ;
}
