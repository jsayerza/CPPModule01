/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsayerza <jsayerza@student.42barcelona.fr> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/21 17:00:00 by jsayerza          #+#    #+#             */
/*   Updated: 2025/09/21 17:00:00 by jsayerza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon( std::string type ) : _type(type)
{}

Weapon::~Weapon( void )
{}

const std::string&	Weapon::getType( void ) const
{
	return (this->_type);
}

void	Weapon::setType( std::string type )
{
	this->_type = type;
}
