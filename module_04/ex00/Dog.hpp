/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdummett <sdummett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/19 23:26:38 by sdummett          #+#    #+#             */
/*   Updated: 2022/01/30 13:03:56 by sdummett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include <iostream>
#include "Animal.hpp"

class	Dog: public Animal {

	public:
		Dog();
		Dog(Dog const & src);
		Dog& operator=(Dog const & rhs);
		~Dog();

		virtual void	makeSound() const;
};

#endif
