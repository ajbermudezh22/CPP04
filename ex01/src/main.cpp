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
#include "../includes/colors.hpp"

int main()
{
	// Test from subject to prove no memory leaks on simple deletion
	std::cout << "--- Subject Leak Test ---" << std::endl;
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	delete j;
	delete i;

	// Test with an array of animals
	std::cout << "\n--- Array Test ---" << std::endl;
	const int num_animals = 4;
	Animal* animals[num_animals];

	for (int k = 0; k < num_animals; ++k)
	{
		if (k < num_animals / 2)
			animals[k] = new Dog();
		else
			animals[k] = new Cat();
	}

	for (int k = 0; k < num_animals; ++k)
	{
		delete animals[k];
	}

	// Deep copy test
	std::cout << "\n--- Deep Copy Test ---" << std::endl;
	Dog original_dog;
	original_dog.getBrain()->setIdea(0, "I love chasing balls!");

	std::cout << "Original Dog's Idea: " << original_dog.getBrain()->getIdea(0) << std::endl;

	// Test copy constructor
	Dog copied_dog = original_dog;
	std::cout << "Copied Dog's Idea: " << copied_dog.getBrain()->getIdea(0) << std::endl;

	// Change original's idea
	original_dog.getBrain()->setIdea(0, "I think I'll take a nap.");
	std::cout << "Original Dog's Idea after change: " << original_dog.getBrain()->getIdea(0) << std::endl;
	std::cout << "Copied Dog's Idea should be unchanged: " << copied_dog.getBrain()->getIdea(0) << std::endl;
	
	return 0;
}
