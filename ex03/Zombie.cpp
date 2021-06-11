/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tayamamo <tayamamo@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/25 17:08:23 by tayamamo          #+#    #+#             */
/*   Updated: 2021/06/11 23:10:49 by tayamamo         ###   ########.fr       */
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

void    Zombie::announce() {
    std::cout << "Braiiiiiiinnnssss..." << std::endl;
}

void    Zombie::putNameType() {
    std::cout << this->name_ << "'s type is " << this->type_ << std::endl;
}

void    Zombie::setName(std::string name) {
    this->name_ = name;
}

void    Zombie::setType(std::string type) {
    this->type_ = type;
}
