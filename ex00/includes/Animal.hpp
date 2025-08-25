/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albbermu <albbermu@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/25 09:51:02 by albbermu          #+#    #+#             */
/*   Updated: 2025/08/25 09:51:02 by albbermu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>
#include <string>

class Animal
{
    public:
        Animal();
        Animal(const Animal &a);
        Animal &operator=(const Animal &a);
        virtual ~Animal();

        virtual void makeSound() const;
        std::string getType() const;

    protected:
        std::string type;
};

#endif