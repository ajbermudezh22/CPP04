/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albbermu <albbermu@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/25 09:51:29 by albbermu          #+#    #+#             */
/*   Updated: 2025/08/25 09:51:29 by albbermu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Animal.hpp"
#include "../includes/Dog.hpp"
#include "../includes/Cat.hpp"
#include "../includes/WrongAnimal.hpp"
#include "../includes/WrongCat.hpp"
#include "../includes/WrongDog.hpp"

int main()
{
	std::cout << "--- Subject Tests ---" << std::endl;
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();

	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	i->makeSound(); //will output the cat sound!
	j->makeSound();
	meta->makeSound();

	delete meta;
	delete j;
	delete i;

	std::cout << "\n--- Wrong Animal Tests ---" << std::endl;
	const WrongAnimal* wrong_meta = new WrongAnimal();
	const WrongAnimal* wrong_i = new WrongCat();
	const WrongAnimal* wrong_j = new WrongDog();

	std::cout << wrong_i->getType() << " " << std::endl;
	wrong_i->makeSound(); //will output the WRONG sound
	wrong_meta->makeSound();

	std::cout << wrong_j->getType() << " " << std::endl;
	wrong_j->makeSound(); //will also output the WRONG sound

	delete wrong_meta;
	delete wrong_i;
	delete wrong_j;

	std::cout << "\n--- Deeper Tests ---" << std::endl;
	Cat original_cat;
	{
		Cat copied_cat(original_cat);
		std::cout << "Copied cat type: " << copied_cat.getType() << std::endl;
		copied_cat.makeSound();
	} // copied_cat goes out of scope here
	std::cout << "Original cat still exists!" << std::endl;
	original_cat.makeSound();

	return (0);
}
