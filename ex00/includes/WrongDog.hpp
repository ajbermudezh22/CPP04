/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongDog.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albbermu <albbermu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/25 09:51:18 by albbermu          #+#    #+#             */
/*   Updated: 2025/08/26 17:59:26 by albbermu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONG_DOG_HPP
#define WRONG_DOG_HPP

#include "WrongAnimal.hpp"

class WrongDog : public WrongAnimal
{
	public:
	    WrongDog();
	    WrongDog(const WrongDog &wd);
	    WrongDog &operator=(const WrongDog &wd);
	    ~WrongDog();
};

#endif
