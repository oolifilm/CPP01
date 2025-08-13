/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leaugust <leaugust@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/13 07:02:55 by leaugust          #+#    #+#             */
/*   Updated: 2025/08/13 07:13:52 by leaugust         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <string>

class Zombie
{
  public:
	Zombie();
	Zombie(std::string name);
	~Zombie();

	void setName(std::string name);
	void announce() const;

  private:
	std::string name;
};

#endif