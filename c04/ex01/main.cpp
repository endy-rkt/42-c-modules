/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trazanad <trazanad@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/21 09:38:33 by trazanad          #+#    #+#             */
/*   Updated: 2025/01/03 02:17:37 by trazanad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"

int main()
{
    const Animal* j = new Dog();
    const Animal* i = new Cat();
    
    delete j;//should not create a leak
    
    delete i;

    Animal* animal[100];

    for (int i = 0; i < 100; i++)
    {
        if (i < 50)
            animal[i] = new Dog();
        else
            animal[i] = new Cat();
    }

    for (int i = 0; i < 100; i++)
        animal[i]->makeSound();

    for (int i = 0; i < 100; i++)
        delete animal[i];
    return (0);
}
