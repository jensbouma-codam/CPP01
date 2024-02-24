/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   HumanA.hpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: jensbouma <jensbouma@student.codam.nl>       +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/02/24 16:11:45 by jensbouma     #+#    #+#                 */
/*   Updated: 2024/02/24 16:19:35 by jensbouma     ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

# include <string>
# include <iostream>

# include "Weapon.hpp"

class HumanA {
    private:
        std::string _name;
        Weapon &_weapon;

    public:
        HumanA (std::string name, Weapon &weapon);
        ~HumanA ();

        void attack();
        void setWeapon(Weapon &weapon);
};

#endif
