/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albbermu <albbermu@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/25 09:51:26 by albbermu          #+#    #+#             */
/*   Updated: 2025/08/25 09:51:26 by albbermu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Dog.hpp"
#include "../includes/colors.hpp"

Dog::Dog(void)
{
    this->type = "Dog";
	this->_brain = new Brain();
    std::cout << YELLOW << "[DOG] 🐶 A Doggo comes to say hi! 🐶 [DOG]" << RESET << std::endl;
}

Dog::Dog(const Dog &d) : Animal(d)
{
    this->type= d.type;
	this->_brain = new Brain(*d.getBrain());
    std::cout << "🐶 A Doggo has been cloned! Now there are two! 🐶" << std::endl;
}

Dog &Dog::operator=(const Dog &d)
{
    this->type = d.type;
	delete this->_brain;
	this->_brain = new Brain(*d.getBrain());
    return (*this);
}

Dog::~Dog(void)
{
	delete this->_brain;
    std::cout << YELLOW << "[DOG] The Doggo ran off to chase a squirrel... [DOG]" << RESET << std::endl;
}

void Dog::makeSound(void) const
{
    std::cout << YELLOW << "[SOUND] WOOFF WOOFF (Dog Sound) [SOUND]" << RESET << std::endl;
}

Brain *Dog::getBrain() const
{
	return (this->_brain);
}
