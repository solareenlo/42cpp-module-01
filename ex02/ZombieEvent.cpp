/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tayamamo <tayamamo@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/25 17:18:31 by tayamamo          #+#    #+#             */
/*   Updated: 2021/05/26 01:03:59 by tayamamo         ###   ########.fr       */
/*   Copyright 2021                                                           */
/* ************************************************************************** */

#include "ZombieEvent.hpp"
#include <stdlib.h>

void    ZombieEvent::setZombieType(std::string type) {
    this->type_ = type;
}

Zombie* ZombieEvent::newZombie(std::string name) {
    return (new Zombie(name, this->type_));
}

Zombie* ZombieEvent::randomChump(void) {
    std::string num = "0123456789";
    std::string alpha = "abcdefghijklmnopqrstuvwxyz";
    std::string name = "", type = "";
    srand((unsigned) time(NULL));
    for (int i = 0; i < 3; i++) {
        name += alpha[static_cast<int>(rand()) % 26];
        type += num[static_cast<int>(rand()) % 10];
    }
    return (new Zombie(name, type));
}
