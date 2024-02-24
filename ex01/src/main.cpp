/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: jensbouma <jensbouma@student.codam.nl>       +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/02/24 15:41:29 by jensbouma     #+#    #+#                 */
/*   Updated: 2024/02/24 15:54:00 by jensbouma     ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main() {
    Zombie *zombies = zombieHorde(5, "Zombie_");
    for (int i = 0; i < 5; i++) {
        zombies[i].announce();
    }
    delete[] zombies;
    zombies[500].announce();
    return (0);
}