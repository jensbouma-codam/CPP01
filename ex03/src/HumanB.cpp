/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   HumanB.cpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: jensbouma <jensbouma@student.codam.nl>       +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/02/24 16:12:42 by jensbouma     #+#    #+#                 */
/*   Updated: 2024/02/24 16:17:47 by jensbouma     ########   odam.nl         */
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
    std::cout << this->_name << " attacks with his " << this->_weapon->getType() << std::endl;
    return ;
}

void HumanB::setWeapon(Weapon &weapon) {
    this->_weapon = &weapon;
    return ;
}
