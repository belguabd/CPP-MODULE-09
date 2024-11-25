/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: belguabd <belguabd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/24 15:22:37 by belguabd          #+#    #+#             */
/*   Updated: 2024/11/25 16:25:18 by belguabd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <vector>
#include <utility>

class PmergeMe
{
public:
    void parseInput(const std::string &data);
    void main();
private:
    std::vector<std::pair<int, int> > data;
    std::vector<int> inputData;
    void setData();
    void getGreaterElement();
    void sortAscending();
    static int struggle ;
};