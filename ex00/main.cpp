/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: belguabd <belguabd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 15:55:51 by belguabd          #+#    #+#             */
/*   Updated: 2024/11/23 13:57:00 by belguabd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

int main(int ac, const char *av[])
{

    if (ac == 2)
    {
        BitcoinExchange btc;
        try
        {
            btc.setMap();
        }
        catch (const std::exception &e)
        {
            std::cout << e.what() << std::endl;
            return 1;
        }
        btc.readDataFromFile(av[1]);
    }
}
