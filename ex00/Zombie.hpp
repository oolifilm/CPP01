/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leaugust <leaugust@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/13 05:35:34 by leaugust          #+#    #+#             */
/*   Updated: 2025/09/22 20:09:19 by leaugust         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <string>
# include <iostream>

class Zombie
{
  public:
  Zombie(const std::string& name);
  ~Zombie();

  void announce() const;
  
  private:
	std::string _name;
};

Zombie* newZombie(std::string name);
void randomChump(std::string name);

#endif