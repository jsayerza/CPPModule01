/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsayerza <jsayerza@student.42barcelona.fr> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/14 12:15:00 by jsayerza          #+#    #+#             */
/*   Updated: 2025/09/14 12:15:00 by jsayerza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Zombie.hpp"

Zombie*	newZombie( std::string name )
{
	Zombie*	newZombie;

	newZombie = new Zombie( name );

	return (newZombie);
}