/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albbermu <albbermu@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/25 11:15:57 by albbermu          #+#    #+#             */
/*   Updated: 2025/08/25 11:15:57 by albbermu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
#define BRAIN_HPP

#include "Animal.hpp"
#include "colors.hpp"

class Brain
{
    public:
        Brain();
        Brain(const Brain &b);
        Brain &operator=(const Brain &b);
        ~Brain();

        const static int numIdeas = 100;

        std::string getIdea(int index);
        void setIdea(int index, const std::string idea);
    private:
        std::string ideas[numIdeas];
};

#endif