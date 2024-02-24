/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Weapon.hpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: jensbouma <jensbouma@student.codam.nl>       +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/02/24 16:10:36 by jensbouma     #+#    #+#                 */
/*   Updated: 2024/02/24 16:19:04 by jensbouma     ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

# include <string>
# include <iostream>

class Weapon {
    private:
        std::string _type;

    public:
        Weapon (std::string type);
        ~Weapon ();

        std::string const &getType();
        void setType(std::string type);
};

#endif

