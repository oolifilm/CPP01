/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leaugust <leaugust@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/13 07:57:13 by leaugust          #+#    #+#             */
/*   Updated: 2025/08/13 08:07:34 by leaugust         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
#define HUMANB_HPP

#include <string>
#include "Weapon.hpp"

class HumanB {
    
    public:
        HumanB(const std::string& name);
        void setWeapon(Weapon& weapon);
        void attack() const;
    
    private:
        std::string name;
        Weapon* weapon;
};

#endif