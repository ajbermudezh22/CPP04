/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albbermu <albbermu@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/25 09:51:20 by albbermu          #+#    #+#             */
/*   Updated: 2025/08/25 09:51:20 by albbermu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Animal.hpp"
#include "../includes/colors.hpp"

Animal::Animal(void) : type("No Type")
{
    std::cout << WHITE << "[*] A generic Animal appeared! [*]" << RESET << std::endl;
}

Animal::Animal(const Animal &a)
{
    this->type = a.type;
    std::cout << WHITE << "[*] A generic Animal has been duplicated! [*]" << RESET << std::endl;
}

Animal &Animal::operator=(const Animal &a)
{
    this->type = a.type;
    return (*this);
}

Animal::~Animal()
{
    std::cout << WHITE << "[*] A generic Animal vanished... [*]" << RESET << std::endl;
}

void Animal::makeSound() const
{
    std::cout << WHITE << "[SOUND] * An indescribable, generic animal sound echoes... *" << RESET << std::endl;
}

std::string Animal::getType() const
{
    return (this->type);
}
