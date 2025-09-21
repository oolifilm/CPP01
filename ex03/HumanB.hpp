/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leaugust <leaugust@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/13 07:57:13 by leaugust          #+#    #+#             */
/*   Updated: 2025/09/21 15:10:18 by leaugust         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
#define HUMANB_HPP

#include <string>
#include "Weapon.hpp"

class HumanB {
    
    public:
        HumanB(const std::string& name);
        ~HumanB();
        void setWeapon(Weapon& weapon);
        void attack() const;
    
    private:
        std::string _name;
        Weapon* _weapon;
};

#endif