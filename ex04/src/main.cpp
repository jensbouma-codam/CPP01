/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: jensbouma <jensbouma@student.codam.nl>       +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/02/24 16:26:25 by jensbouma     #+#    #+#                 */
/*   Updated: 2024/09/24 16:13:53 by jensbouma     ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "FileHandler.hpp"
#include <sys/stat.h>

int main(int argc, char **argv) {
    if (argc != 4) {
        std::cout << "Usage: ./filesed [filename] [s1] [s2]" << std::endl;
        return (1);
    }

    // Check if fileName is a directoru
    struct stat buffer;
    if (stat(argv[1], &buffer) == 0 && S_ISDIR(buffer.st_mode)) {
        std::cout << argv[1] << " is a directory" << std::endl;
        exit(1);
    }

    FileHandler file(argv[1]);
    file.sed(argv[2], argv[3]);
    file.writeNewFile();
    return (0);
}

