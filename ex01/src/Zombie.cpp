/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Zombie.cpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: jensbouma <jensbouma@student.codam.nl>       +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/02/24 15:10:08 by jensbouma     #+#    #+#                 */
/*   Updated: 2024/02/24 15:53:48 by jensbouma     ########   odam.nl         */
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
    // Check if this is allocated
    if (this->_name.empty()) {
        std::cout << "This zombie has no name" << std::endl;
        return;
    }
    std::cout << this->_name << " BraiiiiiiinnnzzzZ..." << std::endl;
}

void Zombie::setName(std::string name) {
    this->_name = name;
}
