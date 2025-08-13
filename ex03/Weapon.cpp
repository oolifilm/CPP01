/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leaugust <leaugust@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/13 07:55:22 by leaugust          #+#    #+#             */
/*   Updated: 2025/08/13 07:57:00 by leaugust         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(const std::string& type) : type(type) {

}

const std::string& Weapon::getType() const {
    return type;
}

void Weapon::setType(const std::string& newType) {
    type = newType;
}
