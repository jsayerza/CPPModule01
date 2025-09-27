/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsayerza <jsayerza@student.42barcelona.fr> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/25 20:00:00 by jsayerza          #+#    #+#             */
/*   Updated: 2025/09/25 20:00:00 by jsayerza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include <fstream>

std::string	liniaModificar(const std::string &linia, const std::string &s1, const std::string &s2)
{
	(void)s2;

	if (linia.empty())
		return (linia);
	
	std::string	liniaModificada;
	size_t	pos = 0;
	size_t	trobat;

	while ((trobat = linia.find(s1, pos)) != std::string::npos)
	{
		liniaModificada += linia.substr(pos, trobat - pos);
		liniaModificada += s2;
		pos = trobat + s1.length();
	}
	liniaModificada += linia.substr(pos);

	return (liniaModificada);
}

bool	fitxerProcessar(const std::string& inputFileName, std::string& s1, std::string& s2)
{
	std::ifstream inputFile(inputFileName.c_str());
	if (!inputFile.is_open())
	{
		std::cerr << "Error: no es pot obrir el fitxer input " << inputFileName << " per a lectura." << std::endl;
		return (false);
	}

	std::string	outputFileName = inputFileName + "_replaced";
	std::ofstream outputFile(outputFileName.c_str());
	if (!outputFile.is_open())
	{
		std::cerr << "Error: no es pot crear el fitxer input " << outputFileName << " per a escriptura." << std::endl;
		return (false);
	}

	std::string linia;
	while (std::getline(inputFile, linia))
	{
		std::string	liniaModificada = liniaModificar(linia, s1, s2);
		outputFile << liniaModificada << std::endl;
	}

	inputFile.close();
	outputFile.close();

	return (true);
}

int main(int argc, char **argv)
{
    if (argc != 4)
    {
        std::cerr << "Ús: ./sed Fitxer_d_entrada String_a_reemplaçar String_de_reemplaç" << std::endl;
		return (1);
    }
	
	std::string	inputFileName = argv[1];
	std::string	s1 = argv[2];
	std::string	s2 = argv[3];

	if (inputFileName.empty())
	{
		std::cerr << "Error: El fitxer no pot estar buit." << std::endl;
		return (1);
	}
	if (s1.empty())
	{
		std::cerr << "Error: str1 no pot estar buit." << std::endl;
		return (1);
	}

	if (!fitxerProcessar(inputFileName, s1, s2))
	{
		std::cerr << "Error: no s'ha pogut processar el fitxer." << std::endl;
		return (1);
	}
	else
	{
		std::cout	<< "S'ha processat el fitxer " << inputFileName
					<< " reemplaçant " << s1 << " per " << s2
					<< std::endl;
		return (1);
	}

    return (0);
}