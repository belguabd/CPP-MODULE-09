/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: belguabd <belguabd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/24 15:22:39 by belguabd          #+#    #+#             */
/*   Updated: 2024/11/25 16:39:51 by belguabd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

int PmergeMe::struggle = -1;

int _Atoi(const std::string &input)
{
    size_t res = 0;
    for (size_t i = 0; i < input.size(); i++)
    {
        res = input[i] - '0' + (10 * res);
        if (res > INT_MAX)
            throw std::invalid_argument("Invalid argument!!");
    }
    return (res);
}

void PmergeMe::parseInput(const std::string &data)
{

    for (size_t i = 0; i < data.size(); i++)
    {
        if (!std::isdigit(data[i]))
            throw std::invalid_argument("Invalid argument!!");
    }
    inputData.push_back(_Atoi(data));
}

void PmergeMe::setData()
{
    std::vector<int>::iterator it = inputData.begin();

    for (; it != inputData.end();)
    {
        if ((it + 1) == inputData.end())
            break;
        std::pair<int, int> pr = std::make_pair(*it, *(it + 1));
        data.push_back(pr);
        it += 2;
    }
    struggle = inputData.size() % 2 != 0 ? *(inputData.end() - 1) : -1;
}
void PmergeMe::getGreaterElement()
{
    std::vector<std::pair<int, int>>::iterator it = data.begin();
    for (; it != data.end(); it++)
    {
        size_t tmp = it->first;
        if (it->first < it->second)
            it->first = it->second, it->second = tmp;
    }
}
void PmergeMe::sortAscending()
{
    
}
void PmergeMe::main()
{
    setData();
    getGreaterElement();
    sortAscending();
}