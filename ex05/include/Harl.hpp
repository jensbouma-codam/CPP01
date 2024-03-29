/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Harl.hpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: jensbouma <jensbouma@student.codam.nl>       +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/02/24 17:20:20 by jensbouma     #+#    #+#                 */
/*   Updated: 2024/02/27 09:23:05 by jensbouma     ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
# define HARL_HPP

# include <iostream>
# include <fstream>
# include <map>

class Harl {
    public:
        Harl();
        ~Harl();
        void complain( std::string level );
        void set_message( std::string message );

    private:
        std::string _message;

        void debug( void );
        void info( void );
        void warning( void );
        void error( void );
};

#endif