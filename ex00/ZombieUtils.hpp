/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieUtils.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leaugust <leaugust@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/13 05:35:34 by leaugust          #+#    #+#             */
/*   Updated: 2025/09/21 18:26:03 by leaugust         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIEUTILS_HPP
# define ZOMBIEUTILS_HPP

# include <string>

Zombie* newZombie(std::string name);
void randomChump(std::string name);

#endif