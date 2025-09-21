/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsayerza <jsayerza@student.42barcelona.fr> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/14 11:00:00 by jsayerza          #+#    #+#             */
/*   Updated: 2025/09/21 13:00:00 by jsayerza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <string>
# include <iostream>
# include <sstream>

class Zombie
{
	private:
		std::string _name;

	public:
		Zombie( void );
		Zombie( std::string name );
		~Zombie( void );

		void	announce( void );
		void	zombieNameSet( const std::string &name );
};

Zombie*		zombieHorde( int N, std::string name );

#endif
