/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Harl.hpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: jensbouma <jensbouma@student.codam.nl>       +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/02/24 17:20:20 by jensbouma     #+#    #+#                 */
/*   Updated: 2024/02/27 11:07:09 by jensbouma     ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
# define HARL_HPP

# include <iostream>
# include <fstream>
# include <map>

enum Level {
    OFF,
    DEBUG,
    INFO,
    WARNING,
    ERROR
};

enum Level get_log_level(std::string level);

class Harl {
    public:
        Harl();
        ~Harl();
        void complain( std::string level );
        void set_message( std::string message );
        void set_filter( enum Level filter );

    private:
        std::string _message;
        enum Level _filter;
        
        void debug( void );
        void info( void );
        void warning( void );
        void error( void );
};

#endif