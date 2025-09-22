/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leaugust <leaugust@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/13 07:02:55 by leaugust          #+#    #+#             */
/*   Updated: 2025/09/22 20:09:46 by leaugust         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>
# include <new>
# include <string>

class Zombie {
  public:
	Zombie();
	~Zombie();

	void setName(const std::string &name);
	void announce() const;

  private:
	std::string _name;
};

Zombie* zombieHorde(int N, std::string name);

#endif