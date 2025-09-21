/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leaugust <leaugust@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/13 08:18:56 by leaugust          #+#    #+#             */
/*   Updated: 2025/09/21 15:54:03 by leaugust         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Replace.hpp"

int main(int argc, char* argv[]) {
    if (argc != 4) {
        std::cerr << "Error ! Launch program with: " << argv[0] << " filename s1 s2" << std::endl;
        return 1;
    }
    Replace replacer(argv[1], argv[2], argv[3]);
    if (!replacer.process())
        return 1;
    return 0;
}
