/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leaugust <leaugust@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/21 17:33:11 by leaugust          #+#    #+#             */
/*   Updated: 2025/09/21 18:15:44 by leaugust         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"
#include <iostream>

int main(int argc, char** argv) {
    if (argc != 2) {
        std::cerr << "Error ! Launch program with: " << argv[0] << " <level>" << std::endl;
        return 1;
    }
    std::string level = argv[1];
    Harl harl;
    int index = -1;
    std::string levels[] = {"DEBUG", "INFO", "WARNING", "ERROR"};
    for(int i = 0; i < 4; i++) {
        if(level == levels[i]) {
            index = i;
            break;
        }
    }
    switch(index) {
        case 0:
            harl.complain("DEBUG");
        case 1:
            harl.complain("INFO");
        case 2:
            harl.complain("WARNING");
        case 3:
            harl.complain("ERROR");
            break;
        default:
            std::cout << "Pardon ?" << std::endl;
    }
    return 0;
}