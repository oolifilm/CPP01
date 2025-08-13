/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leaugust <leaugust@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/13 07:53:41 by leaugust          #+#    #+#             */
/*   Updated: 2025/08/13 08:12:20 by leaugust         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

# include <string>

class Weapon
{
  public:
	Weapon(const std::string& type);
    const std::string& getType() const;
    void setType(const std::string& newType);

    private:
        std::string type;
};

#endif