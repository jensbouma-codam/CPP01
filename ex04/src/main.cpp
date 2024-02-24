/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: jensbouma <jensbouma@student.codam.nl>       +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/02/24 16:26:25 by jensbouma     #+#    #+#                 */
/*   Updated: 2024/02/24 16:52:41 by jensbouma     ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "FileHandler.hpp"

int main(int argc, char **argv) {
    if (argc != 4) {
        std::cout << "Usage: ./filesed [filename] [s1] [s2]" << std::endl;
        return (1);
    }
    FileHandler file(argv[1]);
    file.sed(argv[2], argv[3]);
    file.writeNewFile();
    return (0);
}

