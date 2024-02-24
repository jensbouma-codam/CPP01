/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Zombie.cpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: jensbouma <jensbouma@student.codam.nl>       +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/02/24 15:10:08 by jensbouma     #+#    #+#                 */
/*   Updated: 2024/02/24 15:36:42 by jensbouma     ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie() {
    return;
}

Zombie::~Zombie() {
    std::cout << this->_name << " has been destroyed" << std::endl;
    return;
}

void Zombie::announce() {
    std::cout << this->_name << " BraiiiiiiinnnzzzZ..." << std::endl;
}

void Zombie::setName(std::string name) {
    this->_name = name;
}
