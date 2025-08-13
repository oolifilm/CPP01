/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leaugust <leaugust@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/13 07:07:09 by leaugust          #+#    #+#             */
/*   Updated: 2025/08/13 07:15:04 by leaugust         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde(int N, std::string name){
    if (N <= 0)
        return NULL;
    
    Zombie* horde = new Zombie[N];
    for (int i = 0; i < N; ++i){
        horde[i].setName(name);
    }
    return horde;
}