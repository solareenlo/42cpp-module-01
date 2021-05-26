/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tayamamo <tayamamo@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/26 14:43:35 by tayamamo          #+#    #+#             */
/*   Updated: 2021/05/26 16:09:07 by tayamamo         ###   ########.fr       */
/*   Copyright 2021                                                           */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, const Weapon &weapon) : rweapon_(weapon) {
    this->name = name;
}

void    HumanA::attack(void) {
    std::cout << this->name << " attacks with his ";
    std::cout << this->rweapon_.getType() << std::endl;
}
