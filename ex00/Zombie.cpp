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


Zombie::Zombie( std::string name) : _name( name )
{
	std::cout	<< "Zombie "
				<< this->_name 
				<< " opeartiu."
				<< std::endl;
}

Zombie::~Zombie()
{
	std::cout	<< "Zombie "
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
