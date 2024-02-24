/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: jensbouma <jensbouma@student.codam.nl>       +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/02/24 15:09:25 by jensbouma     #+#    #+#                 */
/*   Updated: 2024/02/24 15:32:42 by jensbouma     ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main() {
    
    Zombie *zombie = newZombie("Kenny");
    zombie->announce();
    randomChump("Chino");
    delete zombie;
    return (0);
}
