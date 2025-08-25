/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albbermu <albbermu@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/25 09:51:24 by albbermu          #+#    #+#             */
/*   Updated: 2025/08/25 09:51:24 by albbermu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Cat.hpp"
#include "../includes/colors.hpp"

Cat::Cat(void)
{
    this->type = "Cat";
	this->_brain = new Brain();
    std::cout << MAGENTA << "[CAT] 😺 A majestic Cat graces you with its presence. 😺 [CAT]" << RESET << std::endl;
}

Cat::Cat(const Cat &c) : Animal(c)
{
    this->type= c.type;
	this->_brain = new Brain(*c.getBrain());
    std::cout << MAGENTA << "[CAT] 😺 A Cat has been copied! Purrfect. 😺 [CAT]" << RESET << std::endl;
}

Cat &Cat::operator=(const Cat &c)
{
    this->type = c.type;
	delete this->_brain;
	this->_brain = new Brain(*c.getBrain());
    return (*this);
}

Cat::~Cat(void)
{
	delete this->_brain;
    std::cout << MAGENTA << "[CAT] The Cat has decided you are no longer worthy of its time. [CAT]" << RESET << std::endl;
}

void Cat::makeSound(void) const
{
    std::cout << MAGENTA << "[SOUND] Meow! Meeeeow! *judges you silently* [SOUND]" << RESET << std::endl;
}

Brain *Cat::getBrain() const
{
	return (this->_brain);
}
