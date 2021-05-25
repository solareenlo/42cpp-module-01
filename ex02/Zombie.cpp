/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tayamamo <tayamamo@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/25 17:08:23 by tayamamo          #+#    #+#             */
/*   Updated: 2021/05/26 00:51:15 by tayamamo         ###   ########.fr       */
/*   Copyright 2021                                                           */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string name, std::string type) {
    this->name_ = name;
    this->type_ = type;
    this->announce_();
}

void    Zombie::announce_(void) {
    std::cout << "Braiiiiiiinnnssss..." << std::endl;
}

void    Zombie::putNameType(void) {
    std::cout << this->name_ << "'s type is " << this->type_ << std::endl;
}
