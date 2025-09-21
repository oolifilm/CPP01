/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leaugust <leaugust@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/13 07:53:12 by leaugust          #+#    #+#             */
/*   Updated: 2025/09/21 15:45:20 by leaugust         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include "HumanB.hpp"
#include "Weapon.hpp"
#include <iostream>

int main()
{
    {
        Weapon wpn("sword");
        HumanA leanne("Leanne", wpn);
        leanne.attack();
        wpn.setType("gun");
        leanne.attack();
    }
    {
        Weapon wpn("sword");
        HumanB julien("Julien");
        julien.setWeapon(wpn);
        julien.attack();
        wpn.setType("gun");
        julien.attack();
    }
    return 0;
}
