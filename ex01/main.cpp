/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leanne <leanne@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/13 07:08:46 by leaugust          #+#    #+#             */
/*   Updated: 2025/09/21 12:28:54 by leanne           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include "ZombieUtils.hpp"
#include <iostream>

int main() {
    int N = 2147483647;
    std::string name = "Zombie";

    Zombie* horde = zombieHorde(N, name);
    if (!horde){
        std::cout << "Failed to create zombie horde." << std::endl;
        return 1;
    }
    for (int i = 0; i < N; ++i){
        horde[i].announce();
    }
    delete[] horde;
    return 0;
}