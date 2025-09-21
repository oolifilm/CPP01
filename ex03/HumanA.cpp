/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leaugust <leaugust@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/13 07:59:00 by leaugust          #+#    #+#             */
/*   Updated: 2025/09/21 15:44:29 by leaugust         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include <iostream>

HumanA::HumanA(const std::string& name, Weapon& weapon) : _name(name), _weapon(weapon) {
}

HumanA::~HumanA() {
}

void HumanA::attack() const {
    std::cout << _name << " attacks with her " << _weapon.getType() << std::endl;
}
