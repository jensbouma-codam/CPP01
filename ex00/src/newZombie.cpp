/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   newZombie.cpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: jensbouma <jensbouma@student.codam.nl>       +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/02/24 15:07:56 by jensbouma     #+#    #+#                 */
/*   Updated: 2024/02/24 15:25:48 by jensbouma     ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* newZombie(std::string name) {
    Zombie *zombie = new Zombie();
    zombie->setName(name);
    return (zombie);
}
