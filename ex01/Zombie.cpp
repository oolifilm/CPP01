/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leaugust <leaugust@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/13 07:04:27 by leaugust          #+#    #+#             */
/*   Updated: 2025/08/13 07:12:14 by leaugust         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <iostream>

Zombie::Zombie() : name ("Unnamed") {
}

Zombie::Zombie(std::string name) : name(name){
    
}

Zombie::~Zombie() {
    
}

void Zombie::setName(std::string name) {
    this->name = name;
}

void Zombie::announce() const {
    std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}