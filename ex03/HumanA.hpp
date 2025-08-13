/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leaugust <leaugust@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/13 07:57:13 by leaugust          #+#    #+#             */
/*   Updated: 2025/08/13 07:58:50 by leaugust         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
#define HUMANA_HPP

#include <string>
#include "Weapon.hpp"

class HumanA {
    
    public:
        HumanA(const std::string& name, Weapon& weapon);
        void attack() const;
    
    private:
        std::string name;
        Weapon& weapon;
};

#endif