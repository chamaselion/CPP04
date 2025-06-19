/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bszikora <bszikora@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/28 17:35:45 by bszikora          #+#    #+#             */
/*   Updated: 2025/06/19 16:17:25 by bszikora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"
#include "WrongAnimal.hpp"
#include <cstdlib> // For exit()
#include <cerrno>  // For perror()


// int main()
// {
// 	Animal ani;
// 	Dog doggo;
// 	Cat catta;

// 	ani.makeSound();
// 	doggo.makeSound();
// 	catta.makeSound();

// 	return 0;
// }

// int main()
// {
// const Animal* meta = new Animal();
// const Animal* j = new Dog();
// const WrongAnimal* i = new WrongCat();
// std::cout << j->getType() << " " << std::endl;
// std::cout << i->getType() << " " << std::endl;
// i->makeSound(); //will output the cat sound!
// j->makeSound();
// meta->makeSound();

// return 0;
// }
int main()
{
    const int size = 10;
    Animal* animals[size];

    // Fill half the array with Dog objects
    for (int i = 0; i < size / 2; i++)
    {
        animals[i] = new Dog();
    }

    // Fill the other half with Cat objects
    for (int i = size / 2; i < size; i++)
    {
        animals[i] = new Cat();
    }

    // Call makeSound for each animal
    for (int i = 0; i < size; i++)
    {
        animals[i]->makeSound();
    }

    // Delete all animals
    for (int i = 0; i < size; i++)
    {
        delete animals[i];
    }

    // Test deep copy and assignment
    Dog originalDog;
    originalDog.getBrain()->setIdea(0, "Original idea");

	Dog copiDog;
	{
		copiDog = originalDog;
	}
	
    std::cout << "Copied Dog Brain Idea 0: " << copiDog.getBrain()->getIdea(0) << std::endl;

    return 0;
}
