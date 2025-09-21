/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieUtils.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leanne <leanne@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/13 05:35:34 by leaugust          #+#    #+#             */
/*   Updated: 2025/09/19 16:15:30 by leanne           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIEUTILS_HPP
# define ZOMBIEUTILS_HPP

# include <string>

Zombie* newZombie(const std::string& name);
void randomChump(const std::string& name);

#endif