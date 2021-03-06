/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdummett <sdummett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/26 15:48:13 by sdummett          #+#    #+#             */
/*   Updated: 2022/02/05 13:50:15 by sdummett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main() {
	
	/* [ Create Bureaucrat With Too High Grade ] */
	std::cout << std::endl;
	std::cout << ">>> [ Create Bureaucrat With Grade Too High ] <<<" << std::endl;
	try {
		Bureaucrat b1 = Bureaucrat("Kevin", 0);
		std::cout << b1 << std::endl;
	}
	catch (std::exception & e) {
		std::cerr << e.what() << std::endl;
	}

	/* [ Create Bureaucrat With Lowest High Grade ] */
	std::cout << std::endl;
	std::cout << ">>> [ Create Bureaucrat With Grade Too Low ] <<<" << std::endl;

	try {
		Bureaucrat b2 = Bureaucrat("Tanya", 151);
		std::cout << b2 << std::endl;

	}
	catch (std::exception & e) {
		std::cerr << e.what() << std::endl;
	}

	/* [ Upgrade Bureaucrat With Highest Grade ] */
	std::cout << std::endl;
	std::cout << ">>> [ Create Bureaucrat With Highest Grade ] <<<" << std::endl;

	try {
		Bureaucrat b3 = Bureaucrat("Amadeus", 1);
		std::cout << b3 << std::endl;
		std::cout << ">>> Trying to upgrade bureaucrat..." << std::endl;
		b3.upgrade();
		std::cout << b3 << std::endl;
	}
	catch (std::exception & e) {
		std::cerr << e.what() << std::endl;
	}

	/* [ Downgrade Bureaucrat With Lowest Grade ] */
	std::cout << std::endl;
	std::cout << ">>> [ Create Bureaucrat  With Lowest Grade ] <<<" << std::endl;

	try {
		Bureaucrat b4 = Bureaucrat("Angelica", 150);
		std::cout << b4 << std::endl;
		std::cout << ">>> Trying to downgrade bureaucrat..." << std::endl;
		b4.downgrade();
		std::cout << b4 << std::endl;
	}
	catch (std::exception & e) {
		std::cerr << e.what() << std::endl;
	}

	/* [ Upgrade/Downgrade Bureaucrat With Grade 42 ] */
	std::cout << std::endl;
	std::cout << ">>> [ Create Bureaucrat With Grade 42 ] <<<" << std::endl;

	try {
		Bureaucrat b3 = Bureaucrat("Amadeus", 42);
		std::cout << b3 << std::endl;
		std::cout << ">>> Trying to upgrade bureaucrat..." << std::endl;
		b3.upgrade();
		std::cout << b3 << std::endl;
		std::cout << ">>> Trying to downgrade bureaucrat..." << std::endl;
		b3.downgrade();
		std::cout << b3 << std::endl;
	}
	catch (std::exception & e) {
		std::cerr << e.what() << std::endl;
	}

	return 0;
}
