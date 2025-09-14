/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsayerza <jsayerza@student.42barcelona.fr> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/14 11:30:00 by jsayerza          #+#    #+#             */
/*   Updated: 2025/09/14 11:30:00 by jsayerza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Zombie.hpp"

int	main( void )
{
	std::cout	<< "\n=== Crear un zombie a HEAP (crear i destruir manualment) ==="
				<< std::endl;
	Zombie*	newHeapZombie =	newZombie("iordee");
	newHeapZombie->announce();
	delete newHeapZombie;

	return (0);
}