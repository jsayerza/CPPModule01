/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsayerza <jsayerza@student.42barcelona.fr> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/21 13:00:00 by jsayerza          #+#    #+#             */
/*   Updated: 2025/09/21 13:00:00 by jsayerza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Zombie.hpp"

int	main( void )
{
	int			N = 3;
	std::string	zombieNameBase = "iordee";

	std::cout	<< "\n=== Crear una horda de "
				<< N
				<< " zombies a HEAP (crear i destruir manualment) ==="
				<< std::endl;
	Zombie*	zombieArray = zombieHorde(N, zombieNameBase);

	std::cout	<< "\n=== Els zombies de la horda s'anuncien ==="
				<< std::endl;
	for (int i = 0; i < N; i++)
	{
		zombieArray[i].announce();
	}
	
	std::cout	<< "\n=== Destruïr manualment la horda de zombies de HEAP ==="
				<< std::endl;
	delete[] zombieArray;

	return (0);
}