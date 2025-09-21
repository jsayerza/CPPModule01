/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsayerza <jsayerza@student.42barcelona.fr> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/21 17:00:00 by jsayerza          #+#    #+#             */
/*   Updated: 2025/09/21 17:00:00 by jsayerza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB( std::string name ) : _name(name), _weapon(NULL)
{}

HumanB::~HumanB( void )
{}

void	HumanB::attack( void )
{
	if (this->_weapon == NULL)
	{
		std::cout	<< this->_name
					<< " has no weapon to attack with :("
					<< std::endl;
		return ;
	}	
	std::cout	<< this->_name
				<< " attacks with their "
				<< this->_weapon->getType()
				<< std::endl;
}
void	HumanB::setWeapon( Weapon& weapon )
{
	this->_weapon = &weapon;
}
