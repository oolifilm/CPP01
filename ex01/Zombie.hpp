/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leanne <leanne@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/13 07:02:55 by leaugust          #+#    #+#             */
/*   Updated: 2025/09/19 16:20:29 by leanne           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <string>

class Zombie
{
  public:
	Zombie();
	Zombie(const std::string& name);
	~Zombie();

	void setName(const std::string& name);
	void announce() const;

  private:
	std::string _name;
};

#endif