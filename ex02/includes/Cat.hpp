/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albbermu <albbermu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/25 09:51:07 by albbermu          #+#    #+#             */
/*   Updated: 2025/08/26 18:01:48 by albbermu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal
{
	public:
	    Cat();
	    Cat(const Cat &c);
	    Cat &operator=(const Cat &c);
	    ~Cat();

	    void makeSound() const;
		Brain *getBrain() const;
	private:
		Brain *_brain;
};

#endif
