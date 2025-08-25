/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongDot.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albbermu <albbermu@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/25 09:51:37 by albbermu          #+#    #+#             */
/*   Updated: 2025/08/25 09:51:37 by albbermu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/WrongDog.hpp"
#include "../includes/colors.hpp"

WrongDog::WrongDog(void)
{
    this->type = "WrongDog";
    std::cout << BLUE << "[DOG?] A WrongDog appears! It barks like a... wait, no it doesn't. [DOG?]" << RESET << std::endl;
}

WrongDog::WrongDog(const WrongDog &wd) : WrongAnimal(wd)
{
    this->type = wd.type;
    std::cout << BLUE << "[DOG?] A WrongDog has been cloned! This is getting out of hand. [DOG?]" << RESET << std::endl;
}

WrongDog &WrongDog::operator=(const WrongDog &wd)
{
    this->type = wd.type;
    return (*this);
}

WrongDog::~WrongDog()
{
    std::cout << BLUE << "[DOG?] The WrongDog has scurried away silently. [DOG?]" << RESET << std::endl;
}
