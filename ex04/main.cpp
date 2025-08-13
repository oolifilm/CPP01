/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leaugust <leaugust@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/13 08:18:56 by leaugust          #+#    #+#             */
/*   Updated: 2025/08/13 08:23:00 by leaugust         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <sstream>
#include <string>

int main(int argc, char* argv[])
{
    if (argc != 4)
    {
        std::cerr << "Usage: " << argv[0] << " filename s1 s2" << std::endl;
        return 1;
    }

    std::string filename = argv[1];
    std::string s1 = argv[2];
    std::string s2 = argv[3];

    if (s1.empty())
    {
        std::cerr << "Error: s1 cannot be empty." << std::endl;
        return 1;
    }

    std::ifstream input(filename.c_str());
    if (!input)
    {
        std::cerr << "Error: cannot open file " << filename << std::endl;
        return 1;
    }

    std::ostringstream buffer;
    buffer << input.rdbuf();
    std::string content = buffer.str();
    input.close();

    std::string result;
    size_t pos = 0;
    size_t found;
    while ((found = content.find(s1, pos)) != std::string::npos)
    {
        result.append(content, pos, found - pos);
        result.append(s2);
        pos = found + s1.length();
    }
    result.append(content, pos, std::string::npos);

    std::ofstream output((filename + ".replace").c_str());
    if (!output)
    {
        std::cerr << "Error: cannot create output file" << std::endl;
        return 1;
    }
    output << result << std::endl;
    output.close();

    return 0;
}
