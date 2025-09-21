/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leaugust <leaugust@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/13 07:55:22 by leaugust          #+#    #+#             */
/*   Updated: 2025/09/21 15:44:45 by leaugust         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(const std::string& type) : _type(type) {
}

Weapon::~Weapon() {
    return;
}

const std::string& Weapon::getType() const {
    return _type;
}

void Weapon::setType(const std::string& newType) {
    _type = newType;
}
