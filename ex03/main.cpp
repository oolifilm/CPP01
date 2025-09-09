/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leaugust <leaugust@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/13 07:53:12 by leaugust          #+#    #+#             */
/*   Updated: 2025/09/09 16:00:25 by leaugust         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include "HumanB.hpp"
#include "Weapon.hpp"
#include <iostream>

int main()
{
    {
        Weapon wpn = Weapon("sword");
        HumanA leanne("Leanne", wpn);
        leanne.attack();
        wpn.setType("gun");
        leanne.attack();
    }
    {
        Weapon wpn = Weapon("sword");
        HumanB julien("Julien");
        julien.setWeapon(wpn);
        julien.attack();
        wpn.setType("gun");
        julien.attack();
    }
    return 0;
}
