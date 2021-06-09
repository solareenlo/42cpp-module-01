/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tayamamo <tayamamo@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/25 17:08:23 by tayamamo          #+#    #+#             */
/*   Updated: 2021/06/10 05:53:36 by tayamamo         ###   ########.fr       */
/*   Copyright 2021                                                           */
/* ************************************************************************** */

#include "Zombie.hpp"

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
