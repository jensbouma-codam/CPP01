/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Harl.hpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: jensbouma <jensbouma@student.codam.nl>       +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/02/24 17:20:20 by jensbouma     #+#    #+#                 */
/*   Updated: 2024/02/24 17:41:05 by jensbouma     ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
# define HARL_HPP

# include <iostream>
# include <fstream>

class Harl {
    public:
        Harl();
        ~Harl();
    private:
        std::string _message;

        void debug();
        void info();
        void warning();
        void error();

        void complain( std::string level );
};

#endif