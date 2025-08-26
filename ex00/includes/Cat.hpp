/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albbermu <albbermu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/25 09:51:07 by albbermu          #+#    #+#             */
/*   Updated: 2025/08/26 17:59:18 by albbermu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"

class Cat : public Animal
{
	public:
	    Cat();
	    Cat(const Cat &c);
	    Cat &operator=(const Cat &c);
	    ~Cat();

	    void makeSound() const;
};

#endif
