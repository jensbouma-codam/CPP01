/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   HumanA.cpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: jensbouma <jensbouma@student.codam.nl>       +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/02/24 16:17:03 by jensbouma     #+#    #+#                 */
/*   Updated: 2024/02/24 16:17:24 by jensbouma     ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weapon) : _name(name), _weapon(weapon) {
    return ;
}

HumanA::~HumanA() {
    return ;
}

void HumanA::attack() {
    std::cout << this->_name << " attacks with his " << this->_weapon.getType() << std::endl;
    return ;
}

void HumanA::setWeapon(Weapon &weapon) {
    this->_weapon = weapon;
    return ;
}
