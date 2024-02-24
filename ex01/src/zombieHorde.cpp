/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   zombieHorde.cpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: jensbouma <jensbouma@student.codam.nl>       +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/02/24 15:41:43 by jensbouma     #+#    #+#                 */
/*   Updated: 2024/02/24 15:53:42 by jensbouma     ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde(int N, std::string name) {
    Zombie *zombies = new Zombie[N];
    for (int i = 0; i < N; i++) {
        zombies[i].setName(name + std::to_string(i));
    }
    return (zombies);
}
