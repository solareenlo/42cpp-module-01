/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tayamamo <tayamamo@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/26 15:25:50 by tayamamo          #+#    #+#             */
/*   Updated: 2021/05/26 16:06:11 by tayamamo         ###   ########.fr       */
/*   Copyright 2021                                                           */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name) {
    this->name = name;
    this->pweapon_ = NULL;
}

void    HumanB::setWepon(const Weapon& weapon) {
    this->pweapon_ = &weapon;
}

void    HumanB::attack(void) {
    if (this->pweapon_) {
        std::cout << this->name << " attacks with his ";
        std::cout << this->pweapon_->getType() << std::endl;
    }
}
