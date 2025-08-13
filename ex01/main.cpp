/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leaugust <leaugust@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/13 07:08:46 by leaugust          #+#    #+#             */
/*   Updated: 2025/08/13 07:31:33 by leaugust         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <iostream>

Zombie* zombieHorde(int N, std::string name);

int main() {
    int N = 10;
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