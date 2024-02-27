/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: jensbouma <jensbouma@student.codam.nl>       +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/02/27 09:07:00 by jensbouma     #+#    #+#                 */
/*   Updated: 2024/02/27 11:35:04 by jensbouma     ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(int argc, char **argv) {
    Harl harl;

    harl.set_filter(OFF);
    if (argc == 2) {
        harl.set_filter(get_log_level(argv[1]));
    }

    harl.complain("debug");
    harl.complain("info");
    harl.complain("warning");
    harl.complain("error");
    return 0;
}

