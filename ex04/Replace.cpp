/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Replace.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leaugust <leaugust@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/11 11:57:00 by leaugust          #+#    #+#             */
/*   Updated: 2025/09/21 16:19:50 by leaugust         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Replace.hpp"

Replace::Replace(const std::string& filename, const std::string& s1, const std::string& s2) : _filename(filename), _s1(s1), _s2(s2) {
}

Replace::~Replace() {
}

bool Replace::process() const {
    if (_s1.empty()) {
        std::cerr << "Error: s1 is empty." << std::endl;
        return false;
    }
    std::ifstream input(_filename.c_str());
    if (!input) {
        std::cerr << "Error: File won't open." << _filename << std::endl;
        return false;
    }
    std::ostringstream buffer;
    buffer << input.rdbuf();
    std::string content = buffer.str();
    input.close();
    std::string result;
    size_t pos = 0;
    size_t found;
    while ((found = content.find(_s1, pos)) != std::string::npos) {
        result.append(content, pos, found - pos);
        result.append(_s2);
        pos = found + _s1.length();
    }
    result.append(content, pos, std::string::npos);
    std::ofstream output((_filename + ".replace").c_str());
    if (!output) {
        std::cerr << "Error: Can't create output file" << std::endl;
        return false;
    }
    output << result;
    output.close();
    return true;
}