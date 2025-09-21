/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leanne <leanne@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/13 07:07:09 by leaugust          #+#    #+#             */
/*   Updated: 2025/09/21 12:28:23 by leanne           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <climits>
#include <new> 

Zombie* zombieHorde(int N, const std::string& name){
    if (N <= 0 || N > INT_MAX)
        return NULL;
    
    Zombie* horde = new (std::nothrow) Zombie[N];
    for (int i = 0; i < N; ++i){
        horde[i].setName(name);
    }
    return horde;
}