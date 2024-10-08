/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Zombie.hpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: jensbouma <jensbouma@student.codam.nl>       +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/02/24 15:06:06 by jensbouma     #+#    #+#                 */
/*   Updated: 2024/09/24 14:45:59 by jensbouma     ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <string>
# include <iostream>

class Zombie {
    private:
        std::string _name;

    public:
        Zombie ();
        ~Zombie ();

        void announce ();
        void setName (std::string name);
};

#endif
