/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tayamamo <tayamamo@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/25 17:08:23 by tayamamo          #+#    #+#             */
/*   Updated: 2021/06/10 06:00:56 by tayamamo         ###   ########.fr       */
/*   Copyright 2021                                                           */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(void) {
    this->name_ = "";
    this->type_ = "";
}

Zombie::Zombie(std::string name, std::string type) {
    this->name_ = name;
    this->type_ = type;
}

void    Zombie::announce(void) {
    std::cout << "Braiiiiiiinnnssss..." << std::endl;
}

void    Zombie::putNameType(void) {
    std::cout << this->name_ << "'s type is " << this->type_ << std::endl;
}

void    Zombie::setName(std::string name) {
    this->name_ = name;
}

void    Zombie::setType(std::string type) {
    this->type_ = type;
}
