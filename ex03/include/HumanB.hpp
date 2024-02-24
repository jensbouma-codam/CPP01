/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   HumanB.hpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: jensbouma <jensbouma@student.codam.nl>       +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/02/24 16:13:51 by jensbouma     #+#    #+#                 */
/*   Updated: 2024/02/24 16:14:12 by jensbouma     ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

# include <string>
# include <iostream>

# include "Weapon.hpp"

class HumanB {
    private:
        std::string _name;
        Weapon *_weapon;

    public:
        HumanB (std::string name);
        ~HumanB ();

        void attack();
        void setWeapon(Weapon &weapon);
};

#endif