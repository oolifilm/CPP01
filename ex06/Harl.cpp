/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leaugust <leaugust@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/21 17:34:01 by leaugust          #+#    #+#             */
/*   Updated: 2025/09/21 18:08:32 by leaugust         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"
#include <iostream>

Harl::Harl() {
}

Harl::~Harl() {
}

void Harl::_debug() const {
    std::cout << "Debug ! Debug ! Debug !" << std::endl;
}

void Harl::_info() const {
    std::cout << "Info ! Info ! Info !" << std::endl;
}

void Harl::_warning() const {
    std::cout << "Warning ! Warning ! Warning !" << std::endl;
}

void Harl::_error() const {
    std::cout << "Error ! Error ! Error !" << std::endl;
}

void Harl::complain(const std::string& level) const {
    typedef void (Harl::*HarlMemFn)() const;
    HarlMemFn functions[] = {&Harl::_debug, &Harl::_info, &Harl::_warning, &Harl::_error};
    std::string levels[] = {"DEBUG", "INFO", "WARNING", "ERROR"};
    for(int i = 0; i < 4; i++) {
        if(level == levels[i]) {
            (this->*functions[i])();
            return;
        }
    }
}