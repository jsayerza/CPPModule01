/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsayerza <jsayerza@student.42barcelona.fr> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/21 17:00:00 by jsayerza          #+#    #+#             */
/*   Updated: 2025/09/21 17:00:00 by jsayerza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA( std::string name, Weapon& weapon ) : _name(name), _weapon(weapon)
{}

HumanA::~HumanA( void )
{}

void	HumanA::attack( void )
{
	std::cout	<< this->_name
				<< " attacks with their "
				<< this->_weapon.getType()
				<< std::endl;
}