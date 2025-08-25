/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albbermu <albbermu@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/25 11:18:36 by albbermu          #+#    #+#             */
/*   Updated: 2025/08/25 11:18:36 by albbermu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Brain.hpp"

Brain::Brain(void)
{
    std::cout << "🧠 Brain default constructor called." << std::endl;
}

Brain::Brain(const Brain &b)
{
    std::cout << "🧠 Brain copy constructor called." << std::endl;
    for (int i = 0; i < numIdeas; i++)
        this->ideas[i] = b.ideas[i];
}

Brain &Brain::operator=(const Brain &b)
{
    for (int i = 0; i < numIdeas; i++)
        this->ideas[i] = b.ideas[i];
    return (*this);
}

Brain::~Brain(void)
{
    std::cout << "🧠 Brain default destructor called." << std::endl;
}

std::string Brain::getIdea(int index)
{
    if (index >= 0 && index < this->numIdeas)
        return (this->ideas[index]);
    else
        std::cout << "Not valid index" << std::endl; 
    return ("");
}

void Brain::setIdea(int index, const std::string idea)
{
    if (index >= 0 && index < this->numIdeas)
        this->ideas[index] = idea;
    else
        std::cout << "Not valid index" << std::endl;
}
