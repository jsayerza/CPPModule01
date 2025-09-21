/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsayerza <jsayerza@student.42barcelona.fr> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/21 13:00:00 by jsayerza          #+#    #+#             */
/*   Updated: 2025/09/21 13:00:00 by jsayerza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Zombie.hpp"

Zombie*	zombieHorde( int N, std::string name )
{
	if (N <= 0)
	{
		std::cout << "El nombre de zombies a crear ha de ser > 0" << std::endl;
		return (NULL);
	}
	Zombie* zombieArray = new Zombie[N];
	for (int i = 0; i < N; i++)
	{
		std::stringstream strStream;
		strStream << name << "_" << i + 1;
		zombieArray[i].zombieNameSet(strStream.str());
	}
	return (zombieArray);
}