/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsayerza <jsayerza@student.42barcelona.fr> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/14 11:15:00 by jsayerza          #+#    #+#             */
/*   Updated: 2025/09/14 11:15:00 by jsayerza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Zombie.hpp"


Zombie::Zombie()
{
	this->_name = "zombieSenseNom";
	std::cout	<< "-- El zombie "
				<< this->_name 
				<< " existeix."
				<< std::endl;
}

Zombie::Zombie( std::string name )
{
	this->_name = name;
	std::cout	<< "-- El zombie "
				<< this->_name 
				<< " existeix."
				<< std::endl;
}

Zombie::~Zombie()
{
	std::cout	<< "-- El zombie "
				<< this->_name 
				<< " destruït."
				<< std::endl;
}

void	Zombie::announce( void )
{
	std::cout	<< this->_name
				<< ": BraiiiiiiinnnzzzZ..."
				<< std::endl;
}

void	Zombie::zombieNameSet( const std::string &name )
{
	this->_name = name;
}