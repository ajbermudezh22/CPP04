/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albbermu <albbermu@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/25 09:51:32 by albbermu          #+#    #+#             */
/*   Updated: 2025/08/25 09:51:32 by albbermu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/WrongAnimal.hpp"
#include "../includes/colors.hpp"

WrongAnimal::WrongAnimal() : type("Wrong type")
{
    std::cout << RED << "[?] ❓ A WrongAnimal materializes, something feels off... ❓ [?]" << RESET << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &w)
{
    this->type = w.type;
    std::cout << "❓ A WrongAnimal was copied. This seems like a bad idea. ❓" << std::endl;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &w)
{
    this->type = w.type;
    return (*this);
}

WrongAnimal::~WrongAnimal()
{
    std::cout << RED << "[?] The WrongAnimal disappeared into the void. Good bye! [?]" << RESET << std::endl;
}

void WrongAnimal::makeSound() const
{
    std::cout << RED << "[SOUND] * A distorted, unsettling WrongAnimal noise is heard. *" << RESET << std::endl;
}

std::string WrongAnimal::getType() const
{
    return (this->type);
}
