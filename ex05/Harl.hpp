/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leaugust <leaugust@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/13 08:27:11 by leaugust          #+#    #+#             */
/*   Updated: 2025/09/21 17:36:36 by leaugust         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
#define HARL_HPP

#include <string>

class Harl
{
    public:
        Harl();
        ~Harl();
        void complain(const std::string& level) const;
        
    private:
        void _debug() const;
        void _info() const;
        void _warning() const;
        void _error() const;
};

#endif