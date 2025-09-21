/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Replace.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leaugust <leaugust@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/11 11:55:12 by leaugust          #+#    #+#             */
/*   Updated: 2025/09/21 15:48:45 by leaugust         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef REPLACE_HPP
#define REPLACE_HPP

#include <string>
#include <fstream>
#include <sstream>
#include <iostream>

class Replace
{
public:
    Replace(const std::string& filename, const std::string& s1, const std::string& s2);
    ~Replace();

    bool process() const;

private:
    std::string _filename;
    std::string _s1;
    std::string _s2;
};

#endif