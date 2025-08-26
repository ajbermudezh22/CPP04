/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albbermu <albbermu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/25 09:51:09 by albbermu          #+#    #+#             */
/*   Updated: 2025/08/26 18:01:08 by albbermu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal
{
	public:
	    Dog();
	    Dog(const Dog &d);
	    Dog &operator=(const Dog &d);
	    ~Dog();

	    void makeSound() const;
		Brain *getBrain() const;
	private:
		Brain *_brain;
};

#endif
