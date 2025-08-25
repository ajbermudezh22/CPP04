/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albbermu <albbermu@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/25 09:51:34 by albbermu          #+#    #+#             */
/*   Updated: 2025/08/25 09:51:34 by albbermu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/WrongCat.hpp"
#include "../includes/colors.hpp"

WrongCat::WrongCat(void)
{
    this->type = "WrongCat";
    std::cout << CYAN << "[!] 🙀 A WrongCat appears! It looks like a cat, but isn't... 🙀 [!]" << RESET << std::endl;
}

WrongCat::WrongCat(const WrongCat &wc) : WrongAnimal(wc)
{
    this->type = wc.type;
    std::cout << "🙀 Another WrongCat was created from the first! Oh no! 🙀" << std::endl;
}

WrongCat &WrongCat::operator=(const WrongCat &wc)
{
    this->type = wc.type;
    return (*this);
}

WrongCat::~WrongCat()
{
    std::cout << CYAN << "[!] The WrongCat has vanished, leaving only confusion. [!]" << RESET << std::endl;
}
