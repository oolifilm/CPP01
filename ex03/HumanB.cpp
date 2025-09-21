/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leaugust <leaugust@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/13 07:59:00 by leaugust          #+#    #+#             */
/*   Updated: 2025/09/21 15:44:09 by leaugust         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"
#include <iostream>

HumanB::HumanB(const std::string& name) : _name(name), _weapon(NULL) {
}

HumanB::~HumanB() {
}

void HumanB::setWeapon(Weapon& weapon) {
    _weapon = &weapon;
}

void HumanB::attack() const {
    if(_weapon)
        std::cout << _name << " attacks with his " << _weapon->getType() << std::endl;
    else
        std::cout << _name << " attack with his bare hands" << std::endl;
}
